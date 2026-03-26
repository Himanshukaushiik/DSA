#include<iostream>
using namespace std;

struct Node{
int data;
struct Node* next;
struct Node* prev;

Node(int val){
    data = val;
    next = NULL;
    prev =NULL;
}
};

Node* inserting(Node* head , int pos ,int val){
    Node* newval = new Node(val);

    //first case 

    if (head == NULL)
    {
        head = newval;
        return head;
    }

    //2nd at begining 

    if(pos ==1){
        newval->next = head;
        head->prev = newval;
        newval->prev = NULL;
        return newval;
    }

    Node*temp = head;
    for (int i =1; i < pos && temp->next!=0; i++)
    {
        temp = temp->next;
    }

    newval->next = temp->next; 
    if (temp->next!= NULL)
    {
        temp->next->prev = newval;
    }
    
    temp->next = newval;
    newval->prev = temp;
    return head;

}

Node* deleting(Node* head ,int pos){
    if (head ==NULL) return NULL;
Node* temp =head;
    if (pos==1)
    {
      head = head->next;
      if(head!=NULL) head->prev = NULL;
      delete  temp; 
      return head;
    }

    for (int i = 1; i < pos && temp->next !=0; i++)
    {
        temp =temp->next;
    }

    if (temp->next == NULL)
    {
        temp->prev->next == NULL;
    }else{
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
    }
    return head;  
}




int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    
    head->next = second;
    second->prev = head;

    second->next =third;
    third->prev = second;

    third->next =fourth;
    fourth->prev = third;
    fourth->next = NULL;

    head = inserting(head , 2,0);
    head = deleting(head , 3);

    Node* temp = head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ->";
        temp = temp->next;
    }
    cout<<temp->data<<endl;

    // while(temp->prev!=NULL){
    //     cout<<temp->data<<" <-";
    //     temp = temp->prev;
    // }
    // cout<<temp->data<<endl;
}