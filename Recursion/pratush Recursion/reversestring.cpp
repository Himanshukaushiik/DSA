#include<iostream>
using namespace std;

string reverse(string &s , int index){
    
    if (index < 0 ) return "";
    return s[index] + reverse(s ,index-1);
    
}

int main(){
    string s;
    cin >>s;

    cout<<reverse(s , s.length()-1);
}