#include<iostream>
#include<deque>
using namespace std;
/*
Cards ko aise arrange karo ki jab:

Top card reveal ho

Next card bottom me chala jaye

toh output sorted (1,2,3,...n) aaye
*/

int main(){
    int n ;
    cin>>n;
    deque<int> dq;

    for (int i = n; i >=1; i--)
    {
        if (!dq.empty())
        {
            int last = dq.back();
            dq.pop_back();

            dq.push_front(last);
        }
        
        dq.push_front(i);  
    }

    for ( int x : dq)
    {
        cout<<x<<" ";
    }
}
    
    