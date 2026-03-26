#include<iostream>
#include<vector>
using namespace std;

int maximum(vector<int> &a , int n){
    if (n==1)
    {
        return a[0];
    }

    int last = a[n-1];
    int ans = maximum(a, n-1);
    return max(ans , last);
}


int main(){
    vector<int> a = {1,2,3,4,5,7,20};
    

    cout<<maximum(a , 7);
}