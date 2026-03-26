#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<int> arr= {4,8,5,2,2};
    int n = arr.size();
    vector<int> ans(n,-1);
    stack<int> st;

    // for (int i = 0; i < n; i++)
    // {
    //     for(int j = i-1; j>=0; j--){
    //         if (arr[i] > arr[j])
    //         {
    //             ans[i] = arr[j];
    //             break;
    //         }
            
    //     }
    // }

    // OPTIMAL 

    for (int i = 0; i < n; i++)
    {
            while (!st.empty() && arr[i] <= arr[st.top()])
            {
                st.pop();
            }
            if (!st.empty())
            {
                ans[i] = arr[st.top()];
            }

            st.push(i);
            
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout<< ans[i] << " ";
    }
    
    
}