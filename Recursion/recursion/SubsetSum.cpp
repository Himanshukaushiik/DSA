#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sumi( int arr[] , int idx ,int n, int sum,vector<int>&v){

    if (idx == n)
    {
        v.push_back(sum);
        return;
    }
    
    sumi(arr, idx+1 , n ,sum , v);
    sumi(arr, idx+1 , n ,sum+arr[idx] , v);
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    vector<int> v;
    sumi(arr , 0 , n ,0 ,v);
    sort(v.begin() , v.end());

    for(auto i:v){
        cout<<i<<" ";
    }
    
}
/*

index == n → push sum
↓
2 calls:
1. sum same (exclude)
2. sum + arr[i] (include)

*/