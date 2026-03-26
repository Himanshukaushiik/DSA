#include<iostream>
#include<stack>
using namespace std;

int main (){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);

    int n =st.size();
    int mid = n/2;
    stack<int>temp;

    for (int i = 0; i < mid; i++)
    { 
        temp.push(st.top());
        st.pop();
    }

    st.pop(); //value delete kardi mid

    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }

    while (!st.empty())
    {
        cout<<st.top() << " ";
        st.pop();
    }
    
    
}