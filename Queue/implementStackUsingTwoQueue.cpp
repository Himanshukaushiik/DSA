#include<iostream>
#include<stack>
#include<queue>
using namespace std;

queue<int>qu;

    void push(int x){
        int n = qu.size();
        qu.push(x);

        for (int i = 0; i < n; i++)
        {
            qu.push(qu.front());
            qu.pop();
        }
        
    }

    void pop(){
        if(!qu.empty()){
            qu.pop();
        }
    }

    int top(){
        if (qu.empty())
        {
            return -1;
        }
        return qu.front();
        
    }

    int size(){
        return qu.size();
    }

    int main(){
        push(5);
        push(6);
        push(7);
        cout<<top()<<endl;
        pop();
        cout<<size()<<endl;
    }
