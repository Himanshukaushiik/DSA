#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={2,3,9,10,2,4,1}; //8 25 25 25 -1 
    int n  = arr.size();
    vector<int> ans(n ,-1);
    stack<int> st;

    // for (int i = 0; i < n; i++)
    // {
    //         for (int j = i+1; j < n; j++)
    //         {
    //             if(arr[i]<arr[j]){
    //                 ans[i] = arr[j];
    //                 break;
    //             }
    //         }  
    // }
    // for(int x:ans){
    //     cout<< x <<" ";
    // }

    // OPTIMAL 

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[i] > arr[st.top()])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }

        st.push(i);
        
    }
    
    for(int x:ans){
    cout<< x <<" ";
}
}