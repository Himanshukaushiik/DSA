#include<iostream>
#include<stack>
#include<cmath>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();

    if(n%2 != 0){
        cout<< -1;
        return 0;
    }

    stack<char>st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{') {
            st.push(s[i]);
        }

        else{
            if(!st.empty() && st.top() == '{'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            
        }
        
    }

    int m = st.size();
    int open  =0 ;
while (!st.empty())
{
    if(st.top() == '{'){
        open++;

        st.pop();
    }
}
int ans = (m/2 + open%2);
cout<<ans;
    
}