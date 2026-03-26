#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1,2,3,1,4,5,2,3,6};
    int n =9;
    int k=3;

    deque<int> dq;
    // 1st step hai k elements tak process krna matlab first window ko process karna 
    for (int i = 0; i < k; i++)
    {
        if (arr[i] <0)
        {
            dq.push_back(i);
        }
        
    }
    // 2nd step vo hai bache hue element ko process karo or pheli window ke front ko print karo 
    for (int i = k; i < n; i++)
    {
        if (!dq.empty())
        {
            cout<<arr[dq.front()]<<" ";
        }else{
            cout<<"0";
        }
// st3 -> aab jo elements bach gaye unhe remove karo left side valo ke jo window se bhar chale gye 
        while (!dq.empty() && dq.front() <= i-k)
        {
            dq.pop_front();
        }
// aab naya element aagr vo hai negative to usse dal de 

    if (arr[i] < 0)
    {
    dq.push_back(i);
    }
}

//for last wndow
if (!dq.empty())
{
    cout<<arr[dq.front()] <<" ";
}else
{
    cout<< 0;
}
return 0;   


    