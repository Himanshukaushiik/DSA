#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {3,0,2,0,4};
    int n = arr.size();
    vector<int> left(n,0) ,right(n,0);
    stack<int> st;

    // PGE
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[i] >= arr[st.top()])
        {
            st.pop();
        }
        if (!st.empty())
        {
            left[i] = arr[st.top()];
        }
        st.push(i); 
    }
    
    while (!st.empty()) st.pop();

    // NGE

        for (int i = 0; i < n; i++){

        while (!st.empty() && arr[i] > arr[st.top()]){
            st.pop();
        }

        if (!st.empty())
        {
        right[st.top()]= arr[i];
        }
        st.push(i); 
    }

    int water = 0;
    for (int i = 0; i < n; i++)
    {
        water += (min(left[i] , right[i]) - arr[i]);
    }

    cout<<water<<endl;
    
    
}