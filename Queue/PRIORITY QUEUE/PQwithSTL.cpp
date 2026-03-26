#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(100);
    qu.push(40);
    qu.push(50);
    // qu.pop();
    // cout<<qu.top();
    while (!qu.empty())
    {
        cout<<qu.top()<<" ";
        qu.pop();
    }
    
    
}