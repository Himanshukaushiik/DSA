#include<iostream>
#include<queue>
using namespace std;

// int circularTour(int petrol[] , int distance[] , int n){

//     int start = 0; //starting pump 
//     int balance =0;// curent petrol
//     int deflict =0; //lost petrol

//     for (int i = 0; i < n; i++)
//     {
//         balance += petrol[i] - distance[i];

//         if (balance < 0)
//         {
//             start = i+1; //next index
//             deflict += balance;
//             balance = 0;
//         }
        
//     }

//     if (balance + deflict >= 0)
//     {
//         return start ;
//     }

//     return -1;
    
    
// }

int main(){
int petrol[]= {4,6,7,4};
int distance[] = {6,5,3,5};
int n =4;

queue<int> q;
int balance = 0 ;
int start =0 ;

for (int i = 0; i < 2*n; i++)
{
    int idx = i%n;
    q.push(idx);

    balance += petrol[idx] - distance[idx];

    while (balance <0 &&  !q.empty()) // truck aage nahi ja skta 
    {
        int front  = q.front(); // front hta rahe hai 
        q.pop();

        balance -= petrol[front] - distance[front]; // us pump ka contrinution bhi remove 
        start = front+1;
    }

    if (q.size() == n)
    {
        cout<<start;
        return 0;
    }
    
}
cout<<-1;

}

/*
1. pump queue में add करो
2. petrol balance update करो
3. balance negative → front remove
4. start change करो
5. queue size n → tour complete
6. नहीं तो answer -1
*/