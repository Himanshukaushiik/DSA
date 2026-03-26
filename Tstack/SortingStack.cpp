#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(3);
    st.push(5);
    st.push(1);
    st.push(4);
    st.push(2);

    stack<int>temp;

    while (!st.empty())
    {
        int x = st.top();
        st.pop();
    // iss loop se jo bhi element x se bada hoga usse hum vapis original stack mein bhej denge 
        while (!temp.empty() && temp.top() > x)
        {
            st.push(temp.top());
            temp.pop(); 
        }
        temp.push(x);
    }
    
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
}