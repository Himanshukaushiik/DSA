// Next greator element in a circular loop 

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<int> nums ={3 ,6 ,5 ,4 ,2};
    int n = nums.size();
    vector<int> ans(n ,0);

    stack<int> s;

    for (int i = 2*n-1; i >=0 ; i--)
    {
        while (!s.empty() && nums[s.top()] <= nums[i%n]) // yha i%n isiliye liya taaki hum cicular le rha hai 
        {
            s.pop();
        }

        ans[i%n] = s.empty() ? -1 : nums[s.top()];

        s.push(i%n);
    }

    for(int val : ans){
        cout<<val<<" ";
    }
    
}