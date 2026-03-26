#include<iostream>
// #include<bits/stdc++.h>
#include<stack>
using namespace std;


    stack<int>st1;
    stack<int>st2;

    void enqueue(int x) 
    {
        st1.push(x);
    }

    int dequeue(){
        if (st1.empty() && st2.empty())
        {
            cout<<"Queue is Empty!!";
            return -1;
        }

        if(st2.empty()){
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
            
        }
        int x = st2.top();
        st2.pop();
        return x;
    }
    

    int main(){
        enqueue(10);
        enqueue(20);
        enqueue(30);

        cout<<dequeue()<<endl;
        cout<<dequeue()<<endl;

        
    }


