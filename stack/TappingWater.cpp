#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    int n ;
    cin>>n;
    vector<int> h(n);
    for(int i=0 ; i<n; i++){
        cin>>h[i];
    }
    int n = h.size();
    vector<int> left(n) ,right(n);


    // Left Max

    left[0] = h[0];

    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i-1] , h[i]);
    }
    
    // right max

    right[n-1] = h[n-1];

    for (int i = n-2; i >= 0; i--)
    {
        right[i] = max(right[i+1] , h[i]);
    }
    
    // water count 
    int water = 0;

    for (int i = 0; i < n; i++)
    {
        water += min( right[i] , left[i] ) - h[i];
    }

    cout<<water;
    
}

