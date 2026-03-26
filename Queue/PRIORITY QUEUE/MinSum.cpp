#include<iostream>
#include<queue>
#include<vector>
#include<string>
using namespace std;

int main(){
vector<int> arr = {6,8,4,5,2,3};
priority_queue <int ,vector<int>,greater<int>> pq;

for ( int x : arr)
{
    pq.push(x);
}

string num1 ="";
string num2 ="";

int i=0;
while (!pq.empty())
{
    if (i%2 == 0)
    {
        num1= num1 + to_string(pq.top());
    }else{
        num2 =num2 +to_string(pq.top());
    }
    pq.pop();
    i++;
}
int n1 = stoi(num1);
int n2 = stoi(num2);

cout<< n1+n2;

}