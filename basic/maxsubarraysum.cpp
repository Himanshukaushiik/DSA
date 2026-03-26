#include <iostream>
using namespace std;

int main(){
    int n=8;

    int arr[n] = {1 ,2,-1,-7,-6,6,4,3};
//     int maxSum = INT16_MIN;

// // Brute Force Approach 
//     for(int st=0 ; st<n ; st++){
//         int currsum =0;
//         for(int end =st ; end<n;end++){
//             currsum+= arr[end];
//             maxSum= max(maxSum ,currsum);
//         }
//     }
//     cout<<"max subarray sum = " <<maxSum<<endl;
// }

// kdanes Algorithm : 
int currsum =0 , maxsum =INT16_MIN;

for(int i=0 ; i<n ;i++){
    currsum+=arr[i];
    maxsum = max(maxsum,currsum);

    if(currsum < 0 ){
        currsum =0;
    }
}

cout<<maxsum;
return 0;

}

