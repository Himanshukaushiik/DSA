#include<iostream>

using namespace std;

#define n 5

int q[n];
int front = -1;
int rear = -1;

void check(int data){
    int i,j;
    for ( i = 0; i < rear; i++)
    {
        if (data >= q[i]) // check about the 
        {
            for ( j = rear+1; j > i; j++)// this makes the shifting 
            {
                q[j] = q[j-1]; // jo elment hai uss se ek phele pe store karne ke liye 
            }
            q[i] = data; // q[i] jo hai vo data ho jayega
            return;
        }
        
    }
    q[i] =data;
}

void enque(int data){
    if (rear>= n-1)
    {
        cout<<"Queue is Overflow or full\n";
        return;
    }

    if (front ==-1 && rear ==-1)
    {
        front =0;
        rear =0;
        q[rear] =data;
        return;
    }else{

        check(data);
        rear++;
    }
}

void deque(){
    if (front ==-1 && rear ==-1)
    {
        cout<<"queue is underflow or empty\n";
        return;
    }
    else if (front ==rear) // if queue have only one element
    {
        front =-1;
        rear=-1;
    }
    else{ // normal deque front pointer aage badhta rahe x  
        front++;
    }
    
}

void display(){
        if (front ==-1 )
    {
        cout<<"queue is empty\n";
        return;
    }
    else{
        for (int i = front; i <= rear; i++)
        {
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
}

void peek(){
    if (front ==-1)
    {
        cout<<"Queue is empty";
        return;
    }else{
        cout<<"Peek element is " << q[front]<<endl;
    }
    
}

int main(){
    int choice ,x;
        while(true)
    {
        cout << "\n1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n5.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter element: ";
                cin >> x;
                enque(x);
                break;

            case 2:
                deque();
                break;

            case 3:
                display();
                break;

            case 4:
                peek();
                break;

            case 5:
                return 0;
        }
    }
}


