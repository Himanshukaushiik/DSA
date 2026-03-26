//   contiguous substrings of a given string

#include<iostream>
using namespace std;

void sub(string ip , string op){
    if (ip.length() == 0)
    {
        cout<<op<<endl;
        return;
    }
    string op1= op;
    string op2= op;

    op1.push_back(ip[0]);
    ip.erase(ip.begin());

    sub(ip,op1);
    sub(ip,op2);
    return;
}

int main(){
    string ip;
    cin>>ip;

    string op = "";
    sub(ip ,op);
    return 0;
}