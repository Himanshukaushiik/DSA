#include<iostream>
#include<stack> 
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int n ;
    cin>>n;
    
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    stack<int>st;

    for (int i = 0; i < n; i++)
    {
        string s =arr[i];
        if (s == "+" || s=="-" || s=="*" || s=="/" || s=="^")
        {
            int operand2 = st.top();
            st.pop();

            int operand1 = st.top();
            st.pop();

            int res;

            if (s == "+") res =operand1+operand2;
            else if (s == "-") res =operand1-operand2;
            else if (s == "*") res =operand1*operand2;
            else if (s == "/") res =operand1/operand2;
            else res = (int)pow(operand1,operand2);

            st.push(res);
        }
        else{
            st.push(stoi(s)); //stoi() ->string to integer conversion
        }
    }
    
   cout<<st.top(); 
}


#include<iostream>
#include<stack>
using namespace std;

int main(){

    string s = "}{{}}{{{";
    int n = s.length();

    if(n % 2 != 0){
        cout << -1;
        return 0;
    }

    stack<char> st;

    for(int i=0;i<n;i++){

        if(s[i] == '{'){
            st.push(s[i]);
        }

        else{

            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }

        }

    }

    int m = st.size();
    int open = 0;

    while(!st.empty()){

        if(st.top()=='{')
            open++;

        st.pop();
    }

    int ans = (m/2 + open%2);

    cout << ans;

}