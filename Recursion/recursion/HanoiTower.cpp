#include<iostream>
using namespace std;

void hanoi(int s , int h, int d , int n){
    if (n ==1)
    {
        cout<<" Moving Plate "<< n << " from " <<s<<" to "<<d<<endl;
        return;
    }

    hanoi(s , d, h ,n-1); // bahi isme source to destination with the help of helper 
        cout<<" Moving Plate "<< n << " from " <<s<<" to "<<d<<endl;
    hanoi(h ,d ,s ,n-1); // isme helper to destination with the help of source 
    
}

int main(){
    int n;
    cin>>n;

    int s =1 ,h =2, d =3;
    hanoi(s ,h,d,n);
    return 0;

}