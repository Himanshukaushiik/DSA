#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* reverse(Node*head){
    if (head == NULL)
    {
        return NULL;
    }
    Node*prev = NULL;
    Node* curr= head;
    Node*next = NULL;

    while(curr !=NULL){
        next = curr->next;
        curr->next =prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next = second;
    second->next =third;
    // third->next = head;

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;

    }

    cout<<endl;

    Node* my = reverse(head);
    while(my!=NULL){
        cout<<my->data<<"<-";
        my = my->next;
    }

}
