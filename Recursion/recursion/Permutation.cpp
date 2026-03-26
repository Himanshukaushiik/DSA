#include<iostream>
#include<set>
using namespace std;
// Permutations of a string like abc --> acb bca abc bac

void permutation(string ip ,string op){

    if (ip.length() == 0)
    {
        cout<<op<<endl;
        return;
    }
for (int i = 0; i < ip.length(); i++)
{
    string ip1 = ip;
    string op1 = op;

    op1.push_back(ip1[i]);
     ip1.erase(ip1.begin() +i); //yha pe i ka matlb har baar next iterator pe value chali jaye 

    permutation(ip1 ,op1);
    }
}

int main(){
    string ip;
    cin>>ip;

    string op = "";

    permutation(ip ,op);
}

/*
--->> Concept of Auto <---
auto x = 10;        // int
auto y = 3.14;      // double
auto s = "hello";   // const char*

*/