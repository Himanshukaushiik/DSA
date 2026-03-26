#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;

    Node(int val){
        data =val;
        next =NULL;
    }
};

struct Node2{
    
    int data;
    struct Node2* next;

    Node2(int val){
        data =val;
        next =NULL;
    }
};   



int main(){
    Node* head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);
    Node* third = new Node(4);
    Node* fourth = new Node(5);

    Node* temp = head;
    while (temp !=0)
    {
        cout<<temp->data<<"->";
        temp =temp->next;
    }
    


    Node2* head = new Node2(1);
    Node2* first = new Node2(2);
    Node2* second = new Node2(3);
    Node2* third = new Node2(4);
    Node2* fourth = new Node2(5);

    Node2* him =  Node2 * head;
    while (him !=0)
    {
        cout<<him->data<<"->";
        him =him->next;
    }
}