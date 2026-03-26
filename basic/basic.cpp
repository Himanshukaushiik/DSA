#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n=153;
    int original = n;
    int sum=0;
while(n>0){
    int dig = n%10;
    sum+= pow(dig,3);
    n = n/10;


}
if(sum == original){
    cout<<"This string is Palindrome"<<sum <<endl;
}


}