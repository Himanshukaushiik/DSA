#include<iostream>
#include<vector>
using namespace std;

bool sort(vector<int> &a ,int n){
    if (n==1)
    {
        return true;
    }

    if (a[n-2] > a[n-1])
    {
        return false;
    }

    return sort(a , n-1);
}

int main(){
    vector<int> a ={1 ,2 ,3 ,4 ,5 ,3};
    int n = 6;
    cout<< sort(a , a.size());
}