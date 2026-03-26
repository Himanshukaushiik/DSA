#include<iostream>
using namespace std ;

int fib(int n){
    if (n==0) return 0;
    if (n==1) return 1;

    int last = fib(n-1);
    int first = fib(n-2);

    return last+first;
    
}

int main(){
    cout<<fib(4);
}