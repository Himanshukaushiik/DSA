#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int precedence(char c){
    if (c == '+' || c == '-' ) return 1;
    if (c == '/' || c == '*' ) return 2;
    if (c == '^'  ) return 3;
    return 0;

    
}
int main(){
    string s;
    cin>>s;

    stack<char> stak;
    string ans = "";

    for (int i = 0; i < s.length(); i++){
        if (s[i] >= 'a' && s[i]<= 'z' ){        // OPERAND
            ans+= s[i];
        }

        else if (s[i] == '('){ // opeining Bracket 
            stak.push(s[i]);
        }

        //CLOSING BRACKET
        else if (s[i] == ')')
        {
            while (!stak.empty() && stak.top() != '(')
            {      //jab tak stack ke top par '(' na mile — tab tak sab operators output me daalte hue pop karte jao
                ans += stak.top();
                stak.pop();
            }
            stak.pop();
        }
        
        // OPERATOR
        else{
            while (!stak.empty() && precedence(stak.top()) >=precedence(s[i])) // YE CHECK KARTA HAI KI STACK SE TOP MEIN AAGR '-' >= '+' TOH SAME HAI TOH YE TRUE 
            {
                ans+=stak.top();
                stak.pop();
            }
            stak.push(s[i]);
        }
        
    } 
    // REMAINIG 
    while (!stak.empty()){ // BACHE HUE OPERATORS KO B DAL DETE HAI 
        ans+= stak.top();
        stak.pop();
    }
    cout<<ans;
}