#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<int> price = {100, 80, 90, 120};
    int n = price.size();
    vector<int> span(n);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && price[i]>= price[st.top()])
        {
            st.pop();
        }
        if (st.empty())
        {
            span[i] = i+1; // matlab left mein koi element nahi hai toh 0+1 =1 
        }else
        {
            span[i] = i-st.top();
        }

        st.push(i);
    }
    
    for(int x: span){
        cout<<x<<" ";
    }

}