#include<iostream>
using namespace std;
/*

copy → space add → no-space add → erase → 2 calls

*/
void under_score(string ip , string op){
    if (ip.length() == 0)
    {
        cout<<op<<endl;
        return;
    }

    string op1 = op;
    string op2 = op;
// space add
    op1.push_back('_');
    op1.push_back(ip[0]);
//without space
    op2.push_back(ip[0]);
    ip.erase(ip.begin()); //erase

    under_score(ip , op1); //2calls
    under_score(ip , op2);
    return;
}

int main(){
    string ip;
    cin>>ip;

    string op = "";
    op.push_back(ip[0]);
    ip.erase(ip.begin());

    under_score(ip ,op);
}
