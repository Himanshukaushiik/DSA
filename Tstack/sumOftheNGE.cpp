// https://www.geeksforgeeks.org/problems/save-gotham1222/1
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {5,9,8,3,2,7};
    int n = arr.size();
    stack<int> st;
    int sum =0 ;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[i] > arr[st.top()])
        {
            sum+=arr[i];
            st.pop();
        }

        st.push(i);
        
    }

    cout<<"SUM OF NEXT GREATORS ARE " <<sum<<endl;
    
}