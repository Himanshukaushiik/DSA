#include<iostream>
#include<vector>
using namespace std;

void subset(vector<int>&a , int n , int index , vector<int>&temp){
    if(index == n){
        for (int x : temp)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }

    //jis index tak chali vo include kiya 
    subset(a , n , index+1 , temp );
    temp.push_back(a[index]);  //yha par a[index] jaise 1 pe ho toh a[i]

    // phir usko pop kardenge kuki uska kaam hogya aab next pe chalenge 
    subset(a , n , index+1 , temp);
    temp.pop_back();
    return;
}

int main(){
vector<int> a = {1,2,3};
int n = a.size();
int index = 0 ;
vector<int>temp;


subset(a , n , index , temp);

}