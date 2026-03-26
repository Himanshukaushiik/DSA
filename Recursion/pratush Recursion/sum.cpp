#include<iostream>
using namespace std;

int fun(int n ){
if (n==1)
{
    return 1;
}

int ans = fun(n-1);
return ans+n;

}
int main(){
   cout<< fun(4);
}