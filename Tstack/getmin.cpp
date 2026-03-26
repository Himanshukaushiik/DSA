#include<iostream>
#include<stack>
using namespace std;

struct MyStack{
    stack<int> st;
    int minElement;

    void push(int x){
        if (st.empty())
        {
            minElement =x;
            st.push(x);
        }
        else if(x >= minElement)
        {
            st.push(x);
        }else{
            st.push(2*x-minElement);
            minElement =x;
        }
    }

    void pop(){
        if (st.empty())
        {
            return;
        }

        int t = st.top();
        st.pop();

        if(t<minElement){
            minElement = 2*minElement - t;
        } 
    }

    int getMin(){
        return minElement;
    }
};