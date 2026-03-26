#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);

    int k =3;

    if (k>qu.size())
    {
        cout<<"0";
    }
    

    stack<int> st;
    for (int i = 0; i < k; i++)
    {
        st.push(qu.front());
        qu.pop();
    }
    
    while (!st.empty())
    {
        qu.push(st.top());
        st.pop();
    }

    int t = qu.size() -k;
    for (int i = 0; i < t; i++)
    {
        qu.push(qu.front()); // move front -bACK
        qu.pop();
    }

    while (!qu.empty())
    {
        cout<<qu.front()<<" ";
        qu.pop();
    }

}
