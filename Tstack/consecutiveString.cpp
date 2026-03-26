#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;

int main(){
    
    string s = "1112223333311111";
    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    { //this removes consecutive 
        if(st.empty() || st.top()!= s[i]){
            st.push(s[i]);
        }
    }
    string ans="";
    while (!st.empty())
    {
            ans = st.top() +ans;
            st.pop();
    }
    cout<<ans<<endl;
    cout<<"RUNNING"<<endl;
    
    
}