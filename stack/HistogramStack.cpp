#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector <int> h = {2 , 1 , 5 , 6 , 2 , 3};
int n = h.size();
    vector<int> left(n) ,right(n);

    stack<int> s;

    // left Smaller Element 

    for(int i =0 ; i<n; i++){

        while(!s.empty() && h[s.top()] >= h[i]){
            s.pop();
        }
        if(s.empty()){
            left[i] =-1;

        }
        else{
            left[i] = s.top();
        }

        s.push(i);
    }

    while(!s.empty()){
        s.pop();
    }

    //Right Smaller Element 

    for(int i =n-1 ; i>=0; i--){

        while(!s.empty() && h[s.top()] >= h[i]){
            s.pop();
        }
        if(s.empty()){
            right[i] =n;

        }
        else{
            right[i] = s.top();
        }

        s.push(i);
    }

    // Area

    int maxArea=0;

    for(int i=0 ; i<n ; i++){
        int width = right[i] -left[i] - 1;
        int area = h[i] * width;

        maxArea = max(maxArea , area);
    }

    cout<<maxArea<<endl;

}