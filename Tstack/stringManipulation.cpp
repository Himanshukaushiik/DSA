#include<iostream>
#include<stack>
#include<vector>
using namespace std;
// Removing the repeated string like aabcde-> 4 words left
int main(){
    int n;
    cin>>n;

    vector<string>s(n);

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    
    stack<string>st;

    for (int i = 0; i < n; i++)
    {
        if (!st.empty() && st.top() == s[i]) 
        {
            st.pop();
        }
        else{
            st.push(s[i]);
        }
         
    }

    cout<<"Words left = " <<st.size();
    
}