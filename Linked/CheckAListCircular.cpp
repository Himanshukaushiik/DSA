#include<iostream>
#include <algorithm>
using namespace std;

struct Node
{
    int data;
    struct Node*next;  

    Node(int val){
        data =val;
        next = NULL;
    }
};
// check the cycle is exist or not 
bool check(Node* head){
    if(head == NULL){
        return false;
    }
    Node*slow = head;
    Node*fast = head;

    while (fast!=NULL && fast->next !=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
        return false;
}
// findiing the head of the circular list.
Node* headFind(Node*head){
    if (head == NULL)
    {
        return NULL;
    }
    Node*slow = head;
    Node*fast = head;

    while (fast!=NULL && fast->next !=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            Node*entry = head;

            while (entry!=slow)
            {
                entry = entry->next;
                slow = slow->next;
            }
            return entry;
            
        }
        
    }
    return NULL; 
}

// length of a cycle
int length(Node*head){
    if (head == NULL)
    {
        return 0;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            int cont=1;
            Node* temp = slow->next;

            while (temp !=slow)
            {
                cont++;
                temp = temp->next;
            }
            return cont;
        }
        
    }
    return 0; 
}



int main(){
    Node* head = new Node(0);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next =second ;
    second->next = third ;
    third->next =head ;

    // calling head finding cycle
    Node* start= headFind(head);
    if (start !=NULL)
    {
        cout<<"the starting point of linkedlist  :- "<<start->data<<endl;
    }
    
    // calliing the checking the list is circular or not 
    bool x = check(head);
    if(x == true){
        cout<<"circular\n";
    }else{
        cout<<"NO circular";
    }


    Node*temp = head;
    if(x)
    {do
    {
       cout<<temp->data;
       temp = temp->next; 

       if (temp !=head)
    {
        cout<<"->";
    }
    } while (temp != head);
}
    else
    {
    while (temp != NULL){
    cout<<temp->data;
    temp = temp->next; 

    if (temp !=NULL)
    {
        cout<<"->";
    }
    }
  }
}


