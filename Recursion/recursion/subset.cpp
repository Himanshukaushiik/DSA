#include<iostream>
#include<vector>
#include<set>
using namespace std;

void Subset(vector<int> ip, vector<int> op, set<vector<int>> &st){

    if(ip.size() == 0){
        st.insert(op);
        return;
    }

    vector<int> op1 = op;
    vector<int> op2 = op;

    op1.push_back(ip[0]);

    ip.erase(ip.begin());

    Subset(ip, op1, st);
    Subset(ip, op2, st);
}

int main(){
    vector<int> arr = {1,2,3};

    set<vector<int>> st;
    vector<int> op;

    Subset(arr, op, st);

    
    for(auto v : st){
        for(int x : v) cout<<x<<" ";
        cout<<endl;
    }
}