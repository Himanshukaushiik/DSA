//  Previous Smalller Element 

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int> arr={3,1,0,8,6};

    vector<int> ans(arr.size(), 0);

    stack<int> s;

    for(int i = 0 ; i < arr.size() ; i++){
        while(!s.empty() && s.top()>=arr[i]){ // jab tak stack ka top arr se bada hai aur stack empty hai tab tak ye loop chalega 
            s.pop();
        }

        if(s.empty()){
            ans[i] =-1;                 // agar empty hai toh -1
        }else{
            ans[i] =s.top();            //agar nahi hai toh top
        }

        s.push(arr[i]);
    }


    for(int val : ans){
        cout<< val<<" ";
    }
}


// prev grator is  while(!s.empty() && s.top()<=arr[i]