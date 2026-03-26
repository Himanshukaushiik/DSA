// https://www.geeksforgeeks.org/problems/queue-designer/1
#include<iostream>
// #include<bits/stdc++.h>
#include<queue>
#include<array>
using namespace std;

int main(){
    queue<int> qu;
    int n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        qu.push(arr[i]);
    }

    while (!qu.empty())
    {
        cout<<qu.front()<<" ";
        qu.pop();
    }

}