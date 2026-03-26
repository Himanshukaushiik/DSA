#include<iostream>
#include<set>
using namespace std;
/*
unique like aab -> 
subsets are --> a a aa aa ab ab b the remove the repetitive like a aa ab b


*/
void unique(string ip ,string op, set<string> &st){

    if (ip.length() == 0)
    {
        st.insert(op);
        return;
    }

    string op1 = op;
    string op2 = op;

    op1.push_back(ip[0]);
    ip.erase(ip.begin());

    unique(ip ,op1,st);
    unique(ip ,op2,st);
    return;
    
}

int main(){
    string ip;
    cin>>ip;

    string op = "";
    set<string>st;

    unique(ip ,op ,st);

    for(auto i : st){
        cout<< i<< " ";
        
    }
}

/*
--->> Concept of Auto <---
auto x = 10;        // int
auto y = 3.14;      // double
auto s = "hello";   // const char*

*/