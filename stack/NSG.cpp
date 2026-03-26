// Next Greator Element 
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector <int> price = {6,8,0,1,3};

    vector<int> ans(price.size() , 0);
    int n= price.size();

    stack<int> s;

    for(int i=n-1 ; i>=0 ; i--){
        while(!s.empty() && s.top() <= price[i]) { // jab tak stack empty nahi ho jata or jab tak stack ka top price se bda nahi ho jata 
            s.pop();
        }

        if( s.empty() ){ // agar stack empty ho jata hai  toh -1 store kardo vector mein
            ans[i] = -1; 
        }else{
            ans[i] = s.top(); // otherwise stack ke top ka element rakh do 
        }

        s.push(price[i]);
 }

 for(int val : ans){
    cout<< val<< " ";
 }

}


// in next smaller while(!s.empty() && s.top() >= price[i])