#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){

    vector<vector<int>> M = {
        {0,1,1,0},
        {1,1,1,1},
        {1,1,1,1},
        {1,1,0,0}
    };

    int n = M.size();
    int m = M[0].size();

    vector<int> height(m,0);
    int maxArea = 0;

    for(int i=0;i<n;i++){

        // update histogram heights
        for(int j=0;j<m;j++){

            if(M[i][j]==0)
                height[j] = 0;
            else
                height[j] += 1;
        }

        // largest rectangle in histogram
        stack<int> st;

        for(int k=0;k<=m;k++){

            int curr;

            if(k==m)
                curr = 0;
            else
                curr = height[k];

            while(!st.empty() && curr < height[st.top()]){

                int h = height[st.top()];
                st.pop();

                int width;

                if(st.empty())
                    width = k;
                else
                    width = k - st.top() - 1;

                maxArea = max(maxArea , h * width);
            }

            st.push(k);
        }
    }

    cout << maxArea;
}