#include<iostream>
using namespace std;

void removeDup(string &s , string ans ,int idx){
    if (idx == s.length()) {
        cout<<ans; 
        return;
    }

    if (ans.find(s[idx]) == -1) {// is line ka matlab aagr ans me phele se vo value ho toh -1 nahi ho toh toh us value ko ans mein add krdo 

    ans = ans+s[idx];
    } 
    removeDup(s , ans , idx+1);

}

int main(){
    string s = "Naveen";
    removeDup(s , "" , 0);
}