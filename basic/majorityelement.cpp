#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){ 
    
    // Bruete Approach  0(n^2)


    // int n=5;

    // int arr[n] = { 1,2,2,1,1};

    // for(int val =0 ; val<n; val++){
    //     int freq =0;

    //     for(int element =0; element<n ; element++){
    //         if(arr[element]== arr[val]){
    //             freq++;
    //         }
    //     }
    //     if(freq>n/2){
    //         cout << " majority element "<<arr[val];
    //         return 0;
    //     }
    // }

    // cout<<"No majority Element "<<endl;

// } ****************************************************************************************************

/*
// Optimal Approach  with sorting 0(n log n)

vector<int> nums = { 1,3,4, 8,4,4,4,4};
int n = nums.size();

sort(nums.begin() , nums.end());

int freq =1;
int ans = nums[0];

for (int i = 1; i < n; i++)
{
    if(nums[i] == nums[i-1]){
        freq++;
    }else{
        freq =1;
        ans = nums[i];
    }
    
    if (freq > n/2)
    {
        cout<<ans;
        return 0;
    }
    
}
cout<<"No majority elements ";
return ans ;

}

*/

// ***********************************************************************************************************************************************

vector<int> nums = { 1,3,4, 8,4,4,4,4};
int n = nums.size();


int freq =0;
int ans = nums[0];

for (int i = 0; i < n; i++)
{
    if(freq == 0){
        ans = nums[i];
    }
    if(ans == nums[i]){
        freq++;
    }else{
        freq--;
    }
    
}

cout<<"majority elements " <<ans;
return 0 ;



}
