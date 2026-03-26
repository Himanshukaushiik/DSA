#include<iostream>
#include<stack>
using namespace std;

class minStack
{
    stack<int> st;                       // store normal elements 
    stack<int> minst;                   // track the minimum elements


public:                                 // public means iske functions main mein b use ho skte hai 


void push(int val){
    st.push(val);                       // normal stack mein dala 

    if (st.empty() || val <=minst.top())  // agar naya element jo humne dala hai ST me  vo chota hai toh use MINST mein v daldo   
    {
        minst.push(val);                // toh us value ko minn stack mein b push kardo 
    }
    
}
void pop(){
    if (st.top() == minst.top()){       //aagr st ka top or minst ka top equal hai toh min st mein se pop kardo 
        minst.pop();
    }

    st.pop();                           // varna normal pop toh karna hi hai 

}

int top(){
    return st.top();                    //sirf upr ka element return karna 
}

int getmin(){
        return minst.top();             //current min element 
}

};

int main(){
    minStack s;                         //created a min stack s
    
    s.push(5);
    s.push(2);
    s.push(10);
    s.push(1);

    cout<<s.getmin()<<endl;             //yha se min 1 ayega 

    s.pop();                            //1 ko pop kardiya aab baki 3 element me se dekhega ki kya bacha hai kya nahi 
    cout<< s.getmin()<<endl;
}
