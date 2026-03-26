#include <bits/stdc++.h>
#include<iostream>
using namespace std;
struct Queue {
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q , int size){
    q->size = size; // this is also written as (*q).size =size;
    q->front = q->rear =0;
    q->Q =(int *)malloc(q->size * sizeof(int));

}

void enqueue(struct Queue *q , int x ){
    if (q->rear == q->size-1)
    {
        cout<<"Queue is Full Now!!";
    }
    else{
        q->rear++;
        q->Q[q->rear] = x;
    }
    
}

int dequeue(struct Queue *q){
    int x;
    if (q->front== q->rear)  //agar front or rear dono ek hi jagah pe ho toh QUEUE empty hai 
    {
        cout<<"Queue is Empty!!"<<endl;
    }else{
        q->front++;
       x = q->Q[q->front];
        return x;
    }
    
}

void Display(struct Queue q){
    
    for (int i = q.front+1 ; i < q.rear; i++)
    {
        cout<<q.Q[i]<<endl;
        cout<<"\n";
    }
    
}

int main(){
    struct Queue q;
    create(&q, 5);

    enqueue(&q ,1);
    enqueue(&q ,2);
    enqueue(&q ,3);
    enqueue(&q ,4);

    Display(q);

    cout<<"The removed element is = "<< dequeue(&q) <<endl;
    Display(q);
    return 0;
}
