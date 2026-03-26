#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    string s;
    cin>>s;

    stack<pair<char,int>> st;
    int count=0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            count++;
            st.push({s[i] , count});
            cout<<count<<" ";
        }
        else if (s[i] == ')')
        {
            cout<<st.top().second<<" ";
            st.pop();
        }
    }
    // cout<<count<<" ";
}
