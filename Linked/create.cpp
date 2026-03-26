#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;

    /*
    constructor --> iski madad se hume barbar pura size ya or kuch define nahi karta padta 

    jaise struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));

    */
    Node(int val){
        data =val;  //data toh value hojayege or null jo hai vo khali ho jayega 
        next =NULL;
    }
};

Node* InsertatFront(Node* head , int val){
    Node* newnode = new Node(val);
    newnode->next = head;
    return newnode;

}

Node* InsertatEND(Node* head , int val){
    Node* newnode = new Node(val);
    if (head == NULL)
    {
        return newnode;
    }
    
    Node* temp = head;
    while (temp->next !=NULL)
    {
        temp =temp->next; //tab tak mujhe har baar temp ko ek step aage bdhate rehna jha null mijaye vha ye stop hojayega 
    }

    temp->next = newnode;
    return head; // aagr node return karta toh system bigad jata or node se aage vale print hojate bas 

}

Node* Remove(Node* head , int val){
    if (head == NULL)
    {
        return NULL;

    }

    if (head->data == val)
    {
        Node*temp = head;
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

    Node* head = new Node(5);
    Node* second = new Node(10);
    Node* third = new Node(15);

    head->next = second ;
    second->next =third ;

    head = InsertatFront(head , 10);
    head = InsertatEND(head , 20);
    head = Remove(head , 10);

    int size = 0;
    Node*temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->"; //iska matlab temp ka data print ho ot temp next node pe chla jaye 
        size++;
        temp = temp->next;
    }
    cout<<"NULL\n";
    cout<<"\nThe size of the linked list is = \n"<<size;
    if (size %2 == 0)
    {
        cout<<"\nThe list is -> EvEn\n";
    }else{
        cout<<"The list is -> OdD";
    }
    
}