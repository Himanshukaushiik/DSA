#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;

    Node(int val){
        data =val;
        next = NULL;
    }
};

Node* InsertAtEnd(Node*head , int val){
    Node*newnode = new Node(val);
    if (head ==NULL)
    {   head = newnode;
        return head;
    }
    Node*temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}

Node* rev(Node* head){
    if (head == NULL)
    {
        return NULL;
    }
    Node*prev = NULL;
    Node*curr = head;
    Node*next = NULL;

    while (curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr =next;
    }
    return prev;
    
    
    
}


Node* addTwoLists(Node* first , Node* second){
    first = rev(first);
    second = rev(second);
    Node*result = NULL;
    Node*tail = NULL;
    
    int carry =0 ;
    // addition loop
    while (first!=NULL || second!=NULL || carry)
    {

        int sum = carry;

        if (first!=NULL)
        {
            sum+= first->data;
            first =first->next;
        }
        if (second!=NULL)
        {
            sum+= second->data;
            second =second->next;
        }

        int digit = sum%10;
        carry = sum/10;
        Node*newnode = new Node(digit);

        if (result ==NULL)
        {
            result = newnode;
            tail = newnode;
        }else{
            tail->next = newnode;
            tail =newnode;
        }
    }
    // reverse result
   return rev(result) ;

}

int main(){
    Node*head1 =NULL;
    int x;
    cout<<"Size of first List: ";
    cin>>x;

    for (int i = 0; i < x; i++)
    {
        int n; cin>>n;
        head1 = InsertAtEnd(head1 , n);
    }

    Node*head2 =NULL;
    int y;
    cout<<"Size of first List: ";
    cin>>y;

    for (int i = 0; i < y; i++)
    {
        int z; cin>>z;
        head2 = InsertAtEnd(head2 , z);
    }

    Node*temp1 = head1;
    cout<<"Node1 = ";
    while (temp1!=NULL)
    {
        cout<<temp1->data<<"->";
        temp1=temp1->next;
    }
    cout<<endl;


    Node*temp2 = head2;
    cout<<"Node2 = ";
    while (temp2!=NULL)
    {
        cout<<temp2->data<<"->";
        temp2=temp2->next;
    }
    cout<<endl;
    
    Node*temp3= addTwoLists(head1 ,head2);
    cout<<"resultant add =";
   while (temp3 != NULL)
   {
    cout<<temp3->data<<"->";
    temp3 =temp3->next; 
   }
   cout<<endl;
   
    
    
}