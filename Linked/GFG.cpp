#include<iostream>
using namespace std;

class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        if(head == NULL) return NULL;
        Node* temp = NULL;
        Node*curr = head;
        
        
        while(curr != NULL){
            // swapping of next to prev
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;
    
            //har ek step move hota rahe 
            curr = curr->next;
        }
    if(temp!=NULL) {
        head= temp->prev;
    }
    return head;
    
};