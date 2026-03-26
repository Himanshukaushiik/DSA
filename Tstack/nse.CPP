#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int> price = {4, 8, 5, 2, 25};
    int n = price.size();
    vector<int> ans(n , -1);
    stack<int> st;

//Brute Approach

//     for (int i = 0; i < n; i++)
//     {
//         for(int j = i+1; j<n; j++){
//             if (price[i]>price[j] )
//             {
//                 ans[i] = price[j];
//                 break;
//             }
            
//         }
//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout<<ans[i]<< " ";
//     }
    
    
// }

//OPTIMAL

for (int i = 0; i < n; i++)
{
    while (!st.empty() && price[i] < price[st.top()] )
    {
        ans[st.top()] = price[i] ;
        st.pop();
    }

    st.push(i);   
}

for(int x:ans){
    cout<<x<<" ";
}
}
