#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n ;
    cin >> n;

    queue<string> qu;
    qu.push("1");

    for (int i = 1; i <= n; i++)
    {
        string x = qu.front();
        qu.pop();

        cout<< x <<" ";

        qu.push(x+ "0");
        qu.push(x+ "1");

    }
    
}