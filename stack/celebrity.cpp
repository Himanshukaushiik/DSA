#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(){

    int n=3;

    int M[3][3] ={
        {0 , 1 , 1 },
        {0 , 0 , 1 },
        {0 , 0 , 0 }
    };

    stack<int>s;

    for (int i = 0; i < n; i++)

    {
        s.push(i); // sabhi elements stack mein push kardiye 
    
    
    while (s.size() > 1)
    {
        // do element ek sath ayenge jo b rahega vahi vapis stack mein jayea vrna pop ho jayega  
        int a = s.top(); s.pop();
        int b = s.top(); s.pop();

        if (M[a][b] == 1)
        {
            s.push(b);  //a agr b ko janta hai toh a out 
        }
        else{
            s.push(a); //  a nahi janta b ko toh b out 
        }
}
    }
    int celeb = s.top();
    for (int i = 0; i < n; i++)
    {
        if( i == celeb) continue;
        if(M[celeb][i] == 1 || M[i][celeb] == 0)
        { //M[celeb][i] == 1 celebrity kisi ko  janta hai  
            // M[i][celeb] == 0  koi banda celebrity ko nahi janta 
            cout<<"No celeberity";
        }
    }
        cout<<"Celebrity is = "<<celeb;
}