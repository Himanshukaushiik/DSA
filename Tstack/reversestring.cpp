#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int main(){
    string s = "HELLO";

    // for (int i = 0; i < s.length()/2; i++)
    // {
    //     char tem = s[i];
    //     s[i] = s[s.length()-i-1];
    //     s[s.length()-i-1] = tem;
    // }
    // cout<<s;

    //****************2nd approach with extra space  *******************

    // string rev ="";
    // int n =s.length();

    // for (int i = n-1 ; i>=0 ; i--)
    // {
    //     rev += s[i];
    // }

    // cout<<rev;


    //*******************Using stack********************************************** 

string rev= "";
stack<char>st;
int n =s.length();
for (int i = 0; i < n; i++)
{
    st.push(s[i]);
}
while (!st.empty())
{
    rev+= st.top();
    st.pop();
}

cout<<rev;

}