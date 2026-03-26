#include<iostream>
#include<vector>
using namespace std;

void parenthesis(int open ,int close ,int n ,string &temp ,vector<string> &res ){

    if(open == n && close == n){
        res.push_back(temp);
        return;
    }

    if (open<n)
    {
        temp.push_back('(');
        parenthesis(open+1 , close , n , temp ,res);
        temp.pop_back();
    }

    if (close<open)
    {
        temp.push_back(')');
        parenthesis(open , close+1 , n , temp ,res);
        temp.pop_back();
    }
    return;
    
}

int main(){
    int n =2;

    vector<string> res;
    string temp = "";

    parenthesis(0,0,n,temp , res);

    for ( string s : res)
    {
        cout<<s<<endl;
    }
    

}