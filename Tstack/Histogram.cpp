#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={2,1,5,6,2,3};
    int n  = arr.size();
    vector<int> left(n,-1) , right(n,n);
    stack<int> st;

    for (int i = 0; i < n; i++)
    { //NSE
        while (!st.empty() && arr[i] < arr[st.top()])
        { 
            right[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty())
    {
        st.pop();
    }

    for (int i = 0; i < n; i++)
    { // PSE
        while (!st.empty() && arr[i] <= arr[st.top()])
        {
            st.pop();
        }
        left[i] = st.empty() ? -1 : st.top();
        st.push(i);       
    }

    int maxArea =0;
    for (int i = 0; i < n; i++)
    {
        int width = right[i] -left[i] -1;
        int area = arr[i] * width;
        maxArea = max(maxArea , area);
        
    }
        cout<<maxArea;
}