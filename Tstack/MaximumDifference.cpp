// https://www.geeksforgeeks.org/problems/maximum-difference-1587115620/1

#include<iostream>
#include<stack>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    vector<int> arr = {2, 1, 8};
    int n = arr.size();
    vector<int> left(n,0) , right(n,0);
    stack<int>st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[i] <= arr[st.top()]){
            st.pop();
        }
        if(!st.empty()){
            left[i] = arr[st.top()];
        }
        st.push(i);
        
    }

    while(!st.empty()) st.pop();

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[i] < arr[st.top()])
        {
            right[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    
int ans =0;

for (int i = 0; i < n; i++){

        ans = max(ans,abs(left[i] -right[i]));     
    }

    cout<<ans;

}
