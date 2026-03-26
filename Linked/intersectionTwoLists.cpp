#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

struct Node
{
    int data ;
    struct Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* insertAtEnd(Node*head , int val){
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        return head;
    }

    Node*temp =head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;

    return head;
}
/*
Node* intersection(Node*head1 ,Node*head2 ){
    Node*result = NULL; //head of new list
    Node*tail = NULL; // last pointer

    while (head1 !=NULL)
    {
        Node*temp = head2;

        while (temp !=NULL)
        {
            if (head1->data == temp->data)
            {
                Node*newnode = new Node(head1->data);
                if (result ==NULL)
                {
                    result = newnode;
                    tail = newnode;
                }else{
                    tail->next = newnode;
                    tail  = newnode;
                }
                break;
            }
            temp = temp->next;
            
        }
        head1= head1->next;
        
    }
    return result;

}
*/

/*Node* intersection(Node* head1 , Node* head2){


    set<int> s;
    
    while (head2!=NULL)
    {
        s.insert(head2->data);
        head2 = head2->next;
    }
    Node*result=NULL;

    Node*temp =head1;
    Node*tail =NULL;
    while (temp !=NULL)
    {
        
    if(s.count(temp->data)>0){
    Node*newnode = new Node(temp->data);
    
    if (result ==NULL)
    {
        result = newnode;
        tail =newnode;
    }else{
        tail->next = newnode;
        tail = newnode;
    }
}
    

        temp =temp->next;
}

    return result;    
}*/

Node* Intersection(Node*head1 , Node*head2){
    if (head1 ==NULL)
    {
        return NULL;
    }
    if (head2 ==NULL)
    {
        return NULL;
    }

    Node* result = NULL;
    Node* tail = NULL;
    
    while (head1 && head2)
    {
        if (head1->data == head2->data)
        {
            Node* newnode = new Node(head1->data);

            if (result == NULL)
            {
                result = newnode;
                tail =newnode;
            }else{
                tail->next = newnode;
                tail= newnode;
            }
            
            head1 = head1->next;
            head2 = head2->next;
        }
       else if (head1->data < head2->data)
       {
        head1 = head1->next;
       }
       else if (head1->data > head2->data)
       {
        head2 = head2->next;
       }
       
    }
    

    return result;
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
    
    cout<<endl;
    // printing intersection part
     Node* ans = Intersection(head1, head2);

    Node* temp3 = ans;
    while(temp3 != NULL){
    cout << temp3->data << "->";
    temp3 = temp3->next;
}

}
