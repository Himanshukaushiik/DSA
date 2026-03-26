#include<iostream>
#include<stack>
using namespace std;

int main (){
    string s;
    cin>>s;
    int n = s.length();

    stack<int> st;
    st.push(-1); //To handle base index for calculating length of valid substring.

    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push(i);
        }
        else
        {
            st.pop();
            if (st.empty())
            {
                st.push(i);
            }else{
                ans = max(ans , i-st.top());
            }
            
        }
        
    }
    cout<<ans;
    
}