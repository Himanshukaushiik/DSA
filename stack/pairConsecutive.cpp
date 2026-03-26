#include<iostream>
#include<stack>
#include<cmath>
using namespace std;

bool ConsecutiveNumber(stack<int> &st){

    int n = st.size();
    stack<int> temp;
    stack<int> restore;
    bool ok =true;

    // condition for odd elements 

    if( n % 2 == 1 ){
        temp.push(st.top());
        st.pop();
    }

    // loop for pairs 
    while(!st.empty()){
        int a = st.top() ; st.pop();
        int b = st.top() ; st.pop();

        if (abs(a-b) !=1)
        {
            ok= false;
        }
        temp.push(a);
        temp.push(b);   
    }
    // push elments  temp stack -> restorestack
while(!temp.empty()){
    restore.push(temp.top());
    temp.pop();
}
    // push elments  restore stack -> original stack
while(!restore.empty()){
    st.push(restore.top());
    restore.pop();
}
return ok;

}


    int main(){
    int n, x;
    stack<int> st;

    cin >> n;          // number of elements

    for(int i = 0; i < n; i++){
        cin >> x;      // element
        st.push(x);    // push element
    }

    if(ConsecutiveNumber(st))
        cout<<"Yes";
    else
        cout<<"No";
}
