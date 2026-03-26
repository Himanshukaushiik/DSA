#include <bits/stdc++.h>
#include<iostream>
using namespace std;

struct Queue {
    int size ;
    int front ;
    int rear;
    int *Q;

};

void create (struct Queue *q ,int size){
    q->size =size;
    q->front = q->rear = 0;
    q->Q= (int*)malloc(q->size * sizeof(int));
}

void enqueue(struct Queue *q ,int x){
    if((q->rear + 1) % q->size == q->front) // manle ki r =0 and f =1 --->>>> (0+1)%size =front --->>> 1%5=1 --->>> 1==1 hence the full 
    {
        cout<<"Queue is full";
    }
    else{
        q-> rear = (q->rear+1 )%q->size;
        q->Q[q->rear] =x;
    }
    
}
int dequeue(struct Queue *q){
    int x =-1;
    if (q->front ==q->rear)
    {
        cout<<"Queue is Empty";
    }else{
        q->front = (q->front+1) % q->size;
        x = q->Q[q->front];
        return x;
    }
    
}

void display(struct Queue q){
    for (int i = q.front+1; i < q.rear; i++)
    {
       cout<<q.Q[i]<<endl; 
    }
    
}

int main(){
    struct Queue q;

    create(&q , 5);

    enqueue(&q , 1);
    enqueue(&q , 2);
    enqueue(&q , 3);
    enqueue(&q , 4);

    display(q);

    cout<<"-> this element is poped <- = " << dequeue(&q)<<endl;
}