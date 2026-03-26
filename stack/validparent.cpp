#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> st;
    string s;
    cin>>s;
    bool isvalid =true;

    for(int i=0 ; i<s.length() ; i++){

        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
        }
        else{
            if(st.empty() ){
                isvalid = false;
                break;
            }

            if( (st.top() == '(' && s[i] == ')') ||
                (st.top() == '[' && s[i] == ']') ||
                (st.top() == '{' && s[i] == '}') ){
                    st.pop();

                }

                else{
                    isvalid= false;
                    break;
                }
        }  
}
        if(isvalid && st.empty() ){
            cout<<"valid"<<endl;
        }else{
            cout<<"no valid"<<endl;
        }

        return 0;
}
