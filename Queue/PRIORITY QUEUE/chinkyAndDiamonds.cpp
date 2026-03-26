#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n =5;
    int k =3;

    int arr[] = {2,1,7,4,2};
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }

    int total = 0;

    for (int i = 0; i < k; i++)
    {
        int x = pq.top();
        pq.pop();

        total+= x;

        pq.push(x/2);
    }

    cout<<total;
    
}