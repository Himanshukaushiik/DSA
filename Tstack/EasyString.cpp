// https://www.geeksforgeeks.org/problems/easy-string2212/1
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;

    int n =s.length();

    // lowercase conversions 
    for (int i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        int count =1;

        while (i+1 < n && s[i] == s[i+1]) 
        {
            count ++;
            i++;
        }

        cout<<count<<s[i];
    }
    
} 
    

