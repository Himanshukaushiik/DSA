#include<iostream>
#include<vector>
using namespace std;

void sum(int open , int close, string op , vector<string> &v){

    if (open==0 && close ==0)
    {
            v.push_back(op);
            return;

    }

    if (open!=0)
    {
        string op1 =op;
        op1.push_back('(');

        sum(open-1 , close , op1 , v);
    }

    if (close>open)
    {
        string op2 = op;
        op2.push_back(')');
        sum(open , close-1 ,op2 ,v);
    }   
}

int main(){
    int n ;
    cin>>n;

    int open=n,close =n;

    vector<string> v;
    string op ="";

    sum(open, close , op , v);

    for(auto i : v){
        cout<< i <<endl;
    }
}