#include<iostream>
#include<queue>
using namespace std;

int main(){
    int t;
    cout<<"Enter the test cases " ;
    cin>>t;
    
    while(t--){
        int Q;
        cout<<"Enter the test queries   " ;
        cin>>Q;

        queue<int>qu;
        for (int i = 0; i < Q; i++)
        {
            char type;
            cin>>type;
// push Element 
            if (type =='a' || type == 'A')
            {
                int x;
                cin>>x;
                qu.push(x);
            }
// pop 
            else if (type == 'b' || type == 'B')
            {
                if (qu.empty())
                {
                    cout<<"Queue is Empty";
                    return -1;
                }
                else{
                    cout<< qu.front() << " ";
                    qu.pop();
                }
            }
// qu size
            else if (type == 'c' || type == 'C')
            {
                cout<<qu.size()<<" ";
            }
// qu front
            else if (type == 'd' || type == 'D')
            {
                if (qu.empty())
                {
                    cout<<-1<<" ";
                }else{
                    cout<<qu.front()<<" ";
                }
                
            }
// qu back;
            else if (type == 'e' || type == 'E')
            {
                if (qu.empty())
                {
                    cout<<-1<<" ";
                }else{
                    cout<<qu.back()<<" ";
                }
                
            }
             
        }
        cout<<endl;
    }
}