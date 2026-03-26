#include<iostream>
#include<algorithm>
using namespace std;

struct Node{
    int data;
    struct Node* next;

    Node(int val){
        data =val;
        next =NULL;
    }
};

Node* insertAtEnd(Node* head , int val){
    Node* newnode = new Node(val);
    if (head ==NULL)
    {
        head =newnode;
        return head;
    }

    Node*temp =head;

    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    return head;  
}

int main(){
    Node*head1 =NULL;
    Node*head2 =NULL;
    int n;
    cout<<"enter the size for first list : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        head1 = insertAtEnd(head1, x);
    }

    int y ;
    cout<<"enter the size for second list : ";
    cin>>y;
    for (int j = 0; j < y; j++)
    {
        int x;
        cin>>x;
        head2 = insertAtEnd(head2 , x);
    }

    Node*temp1 = head1;
    while (temp1 !=NULL)
    {
        cout<<temp1->data<<"->";
        temp1= temp1->next; 
    }
    cout<<endl;
    Node*temp2 = head2;
    while (temp2 !=NULL)
    {
        cout<<temp2->data<<"->";
        temp2= temp2->next; 
    }
}