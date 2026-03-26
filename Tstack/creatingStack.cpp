#include<iostream>
#include<Stack>
#include<algorithm>
using namespace std;

struct  stack
{
    int size;
    int top;
    int *s;
}st;

void push(){
    int num;

    if(st.top == st.size -1){
        cout<<"Stack OVerflow \n";  // agar stack ka top ka index or st.size aagr brabr hua toh stack puri trah bhar chuka hai 
        return;
    }
    cout<<"Enter a Number to push";
    cin>>num;
    st.top++; //phele jgh baad me digit dalo 
    st.s[st.top] = num; // iska mtlb stack ke s array mein top index wali position ki value ko badal kar num vali kardo 
}

void pop(){
    if(st.top == -1){  //aagr stack ak top -1 hai 
        cout<<"Stack is Empty\n";
        return;
    }

    cout<<"popped: " << st.s[st.top]<<endl; //other wsise pop kardo or st.s[st.top] ko pop kardo means stack ke top ko pop kardo
    st.top--; //phir stack ka size ghta do
}

void peek(){
    int pos;
    cout<<"Enter the Position : ";
    cin>>pos;

    if(st.top - pos + 1 <0){  //st.top minus jo element hume chaihye  +1 kuki array 0 se shuru hota h  aagr ye 0 se chote hai 
        cout<<"Invalid Postion\n";
    }else{
        cout<< st.s[st.top -pos+1]<<endl;  // nahi tooh  st.s[st.top - pos +1] print 
    }
}
void display(){
    if(st.top == -1){
        cout << "Stack Empty\n";
        return; // stack ka top ==-1 tph empty 
    }

    for(int i = st.top; i >= 0; i--) //reverse loop for pinting isse stack ek sequence mein print hoga 
        cout << st.s[i] << " ";
    cout << endl;
}

int main(){

    cout << "Enter stack size: ";
    cin >> st.size;

    st.s = (int*)malloc(st.size * sizeof(int)); //creating memory for stack array at runtime 
    st.top = -1;

    int choice;

    while(true){

        cout << "\n1 Push\n2 Pop\n3 Peek\n4 Display\n5 Exit\n";
        cin >> choice;

        switch(choice){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: return 0;
            default: cout << "Invalid\n";
        }
    }
}