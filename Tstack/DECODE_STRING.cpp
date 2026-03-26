#include<iostream>
#include<stack>
using namespace std;

int main(){

    string s = "3[b2[ca]]";

    stack<int> num;
    stack<string> st;

    string curr = "";
    int number = 0;

    for(int i=0; i<s.length(); i++)
    {
        char c = s[i];

        if(isdigit(c))
        {
            number = number*10 + (c-'0');
        }

        else if(c == '[')
        {
            num.push(number);
            st.push(curr);
            number = 0;
            curr = "";
        }

        else if(c == ']')
        {
            int k = num.top();
            num.pop();

            string temp = st.top();
            st.pop();

            for(int j=0; j<k; j++)
            {
                temp += curr;
            }

            curr = temp;
        }

        else
        {
            curr += c;
        }
    }

    cout << curr;
}