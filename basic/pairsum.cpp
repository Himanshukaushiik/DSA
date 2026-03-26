#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     vector<int> ans;
//     int n=4;
//     int arr[n] = {11,7,2,4};
//     int target =9;


//     for(int i =0 ; i<n ;i++){
//         for(int j=i+1 ; j<n ;j++){
//             if(arr[i] + arr[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
                
//             }
//         }
//     }

//     for(int i=0 ; i<ans.size() ; i++){
//         cout << ans[i] << " ";
//     } 

// }


//  using proper vector ;

// vector<int> pairsum( vector <int> nums ,int target){
//     vector<int> ans;
//     int n =nums.size(); 
//     for(int i=0 ; i<n ;i++){
//         for(int j =i+1 ;j<n;j++ ){
//             if(nums[i] + nums[j] ==  target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }

// }

// int main(){
// vector<int> nums ={2,7,11,14};
// int target =9 ;
// vector<int> ans = pairsum(nums ,target);
// cout<<ans[0]<< " " <<ans[1]<<endl;
// }


// optimal approach 

vector<int> pairsum( vector<int> nums , int target){
    vector<int> ans ;
    int n = nums.size();
    int i = 0 ;
    int j = n-1;

        while(i<j){

            int currsum = nums[i] + nums[j];

            if(currsum>target){
                j--;
            }
            else if (currsum<target)
            {
                i++;
            }else{
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }

        return ans ;
    }


int main(){
    vector<int> nums = {2,7,11,14};
    int target =9;

    vector<int> ans = pairsum(nums ,target);
    
    if (ans.size() == 0){
        cout<<"No pair Found !!";
    }
    else{
        cout<< ans[0] << " " <<ans[1]<<endl;
    }
    return 0;
}