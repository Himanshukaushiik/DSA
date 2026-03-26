#include<iostream>
using namespace std;

// this function calculates the no. path in a matrix to acheive its destination 

int matrix_path(int n ,int m){
    if (n == 1 || m==1){
        return 1;
    }
    
    return matrix_path(n-1 ,m) + matrix_path(n,m-1);
    
}

int main(){
    int n ,m;
    cin>>n >>m;

    cout<<matrix_path(n,m);
    //  here n stands for row and m stands for column 
}