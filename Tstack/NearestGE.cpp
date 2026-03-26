#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<int> arr= {4, 8, 5, 2, 25};
    int n = arr.size();
    vector<int>  left(n,-1) , right(n , -1) ,ans(n,-1);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[i] >= arr[st.top()])
        {
            st.pop();
        }
        if (!st.empty())
        {
        left[i] = st.top();
        }
        
        st.push(i);
        
    }

    // cout<< "Previous Greator "<<endl;
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout<<ans[i] << " " ;
    // }

    while (!st.empty()){
        st.pop();
    }
    
    for(int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[i] > arr[st.top()] )
        {
        right[st.top()] = i;  
            st.pop();

        }
            st.push(i);
    }

    // cout<<"Next Greator" <<endl;
    // for(int x : hi){
    //     cout<< x <<" " ; 
    // }

    for ( int i = 0; i < n; i++)
    {
        if (left[i] == -1 && right[i] ==-1)
        {
            ans[i] =-1;
        }
        else if (left[i] == -1 || right[i] == -1)
        {
            ans[i] = arr[max(left[i] , right[i])];
        }
        else
        {
            ans[i] = (i-left[i] <= right[i]-i) ? arr[left[i]] : arr[right[i]];
        }
        
        
    }
    
    
}
