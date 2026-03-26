#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* insertAtBeginning(Node* head , int newdata){
    Node* newnode = new Node(newdata);
    newnode->next = head;
    return newnode;
}
Node* insertAtEnd(Node* head , int endData){
    Node* newnode = new Node(endData);
    if (head == NULL)
    {
        return newnode;
    }
    Node* temp =head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;

    return head; 
}

Node* DeleteHead(Node* head ){
    if (head!= NULL )
    {
        return NULL;
    }

        Node* temp =head;
        head = head->next;
        delete temp;
        return head;
    }
    


Node* Remove(Node* head , int val){
    if (head == NULL)
    {
        return NULL;

    }

    if (head->data == val){

        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;

    while (temp->next != NULL)
    {
        if (temp->next->data == val)
        {
            Node* val = temp->next;
            temp->next = temp->next->next;
            delete val;
            return head;
        }
        temp = temp->next;
    }

    return head;
}


int main(){

    /*
    
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    
    old approach or we use this in C
    */

    // create nodes
    Node* head = new Node(15);
    Node* second = new Node(20);
    Node* third = new Node(25);

    // linking
    head->next = second;
    second->next = third;

    // insert at beginning
    head = insertAtBeginning(head ,10);
    head = insertAtBeginning(head ,5);
    // inser at end 
    head = insertAtEnd(head , 30);
    head = insertAtEnd(head , 35);
    // Delete Head
    head = DeleteHead(head);
    // Delete nth Node

    // print
    Node* temp = head;
    int count = 0;

    while(temp != NULL){
        cout << temp->data << "->";
        count++;
        temp = temp->next;
    }

    cout << "NULL\n";
    cout << "The size of the Linked list is \n" << count;
}
