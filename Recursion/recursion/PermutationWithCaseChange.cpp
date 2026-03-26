#include<iostream>
#include<cctype>
using namespace std;

void change(string ip ,string op){
    if (ip.length() == 0) 
    {
        cout<<op<<endl;
        return;

    }

    string op1 = op;
    string op2 = op;

    op1.push_back(tolower(ip[0]));
    op2.push_back(toupper(ip[0]));

    ip.erase(ip.begin());
    change(ip ,op1);
    change(ip ,op2);
}
int main(){
    string ip;
    cin >> ip;

    change(ip, "");

    return 0;
}