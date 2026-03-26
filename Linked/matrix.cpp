#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    struct Node* right;
    struct Node* left;

    Node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};

Node* construct(vector<vector<int>>& mat){
    int n = mat.size();

    if (n==0)
    {
        return NULL;
    }
    vector<vector<Node*>> nodes(n , vector<Node*>(n , NULL));

    // taking input

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            nodes[i][j] = new Node(mat[i][j]);
        }
        
    }
    
    // linking the matrix with them 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            if (j+1<n)
            {
                nodes[i][j]->right = nodes[i][j+1];
            }

            if (i+1<n)
            {
                nodes[i][j]->left = nodes[i+1][j];
            }
        }
    }
    return nodes[0][0];
}





// printing 
    void printMatrix(Node* head){

    Node* temprow = head;

    while(temprow != NULL){

        Node* curr = temprow;

        while(curr != NULL){
            cout << curr->data <<" ";
            curr = curr->right;

            if (curr!=NULL)
            {
                cout<<"->";
            }
            
        }

        cout << endl;

        temprow = temprow->left;
    }
}


int main(){

    vector<vector<int>> mat = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    Node* head = construct(mat);

    printMatrix(head);

    return 0;
}