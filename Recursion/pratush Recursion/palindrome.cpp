#include<iostream>
using namespace std;

bool palindrome(string &s ,int low , int high){
    int length = high-low+1;

if (length ==0 || length ==1) return true;

if (s[low] != s[high])
{
    return false;
}

return palindrome(s , low+1 , high-1);
}

int main(){
    string s;
    cin>>s;
    

    cout<<palindrome(s , 0 , s.length()-1);
}