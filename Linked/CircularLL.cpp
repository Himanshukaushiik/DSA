#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* insertingEnd(Node* head , int val){
    Node* newnode = new Node(val);
    if (head == NULL)
    {
        newnode->next = newnode;
        return newnode;
    }

    Node* temp = head;

    while(temp->next !=head){
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->next =head;
    return head;
}

Node* insertingAtPos(Node* head , int pos , int val){
    Node* newnode = new Node(val);
    if (head == NULL)
    {
        return newnode;
    }
Node*temp =head;
    if (pos==1){
        while (temp->next !=head)
        {
        temp = temp->next  ;
        }
        temp->next =newnode;
        newnode->next = head;
        return newnode;

    }

    temp = head;

    for (int i = 1; i < pos && temp->next!=head; i++)
    {
        temp= temp->next;
    }
    newnode->next =temp->next;
    temp->next = newnode;
}

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next =second ;
    second->next = third ;
    third->next =head ;

Node* temp = head;

    do{
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }while(temp != head);
}    

