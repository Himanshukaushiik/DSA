#include<iostream>
#include<stack>
#include<array>
using namespace std;

int main (){
    int arr[]= {5,3,7,2};
    int n= 4;
    stack<int> st;
    stack<int> min;

    //pushing all elements to the stack 
    for (int i = 0; i < n; i++)
    {
        st.push(arr[i]);

        if (min.empty() || arr[i] <= min.top())
        {
            min.push(arr[i]);
        }
    }
    // Abb poping and printing chalegi 
    while (!st.empty())
    {
        int x = st.top();
        st.pop();

        if(x==min.top()){
            min.pop();
        }

        if(!min.empty()){
            cout<<min.top()<<" ";
        }
    }
    
}