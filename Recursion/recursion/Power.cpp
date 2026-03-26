#include<iostream>
using namespace std;

long long int pw(long long int n , long long int p){
    if (p==0)
    {
        return 1;
    }

    long long int t;
    long long int m = 1000000007;
    t = pw(n , p/2);
    if(p%2)
    {
                return ( (n%m) * ((t%m)*(t%m)%m) ) % m;
    }
    else
    {
        return ((t%m)*(t%m)%m);
    }
    
}

long long int rev(long long int n ){
    long long int r;
    r=0;
    
    while (n!=0)
    {
        r = (r*10)+ (n%10); // (r*10) --> r=0 then r*10 =0 and n%10 hai vo hoga 123%10 = 3
        n = n/10;
    }

    return r;
    
}

void solve(){
    long long int n;
    cin>>n;

    long long int p = rev(n);
    cout<<pw(n,p);
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
        cout<<endl;
    }
    
}