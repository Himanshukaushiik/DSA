#include<iostream>
using namespace std;

int digitSum(int n){
    if (n==0)
    {
        return 0;
    }

    int d = n%10;
    n = n/10;

    int ans = digitSum(n);
    return ans+d;
    
}

int main(){
    cout<<digitSum(123);
}