#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(5);
    dq.push_front(10);
    dq.push_back(4);
    dq.push_front(9);

    while (!dq.empty())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    

}