#include<iostream>
#include<vector>
#include<queue>
#include<deque>
using namespace std;

int main(){
    int arr[] = {1,2,3,1,4,5,2,3,6};
    int n = 9;
    int k =3;

    deque<int> dq;
    for (int i = 0; i < k; i++)
    {
        //first window
        while(!dq.empty() && arr[i] <= arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    // remaining elements 
    for (int i = k; i <n; i++)
    {
        cout<<arr[dq.front()]<<" ";

        while (!dq.empty() && dq.front() <= i-k)
        {
            dq.pop_front();
        }

        while (!dq.empty() && arr[i] <=arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i); 
    }
    
    cout<<arr[dq.front()]<<" ";

}