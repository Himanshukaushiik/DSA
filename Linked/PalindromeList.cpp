#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct Node{
    string data;
    struct Node* next;

    Node(string val){
        data =val;
        next = NULL;
    }

};

// !! inserting at value !!

void insertatEnd(Node* &head , string val){
    Node* newnode = new Node(val);
    if (head ==NULL)
    {
        head = newnode;
        return ;
    }

    Node*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    
}

//!!palindrome string!!
/*
bool palindrome( Node*root){
    string s ="";
    
    while (root != NULL)
    {
        s += root->data;
        root = root->next;
    }
    int n = s.length();
    
    
    for (int i = 0; i < n/2; i++)
    {
        if(s[i] != s[n-1-i]){
            return false;
        }
    }
    return true;
}
*/

// 2nd approach optimal 

bool palindrome(Node*root){
    string s = "";

    while (root != NULL)
    {
        s+= root->data;
        root = root->next;
    }

    string rev = s;
    reverse(rev.begin() ,rev.end());

    return s==rev;
}

int main(){
    
    int x;
    cout<<"Enter the size of String = \n";
    cin>>x;
    
    Node* head =NULL;

    for (int i = 0; i < x; i++)
    {
        string n;
        cin>>n;
        insertatEnd(head , n);
    }
    
    if (palindrome(head))
    {
        cout<<"TRUE";
    }else{
        cout<<"FALSE";
    }
}