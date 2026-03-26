#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    int n;
    cin>>n;

    int M[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>M[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        st.push(i);
    }

        int first ,second;

        while (st.size() > 1)
        {
            first = st.top();
            st.pop();

            second = st.top();
            st.pop();

            // if (M[first][second] && !M[second][first]) 
            // {
            //     st.push(second);
            // }
            // else if (!M[first][second] && M[second][first]) 
            // {
            //     st.push(first);
            // }


            //  instead of this we also use this 
            
            if(M[first][second] == 1)  // iska matlab ki jasie M[2][1] -> iska matlab second first ko janta hai  
            st.push(second);
        else
            st.push(first);
        }
    

        if (st.empty())
        {
            cout<<"No Celeberity!!";
            return 0;
        }

        int candidate = st.top() ;
        st.pop();

        //Celebrity hai YA nahi 
        int row=0 ,col = 0;
        for (int i = 0; i < n; i++)
        {
            row += M[candidate][i];
            col+= M[i][candidate];
        }

        if (row == 0 && col == (n-1))
        {
            cout<< "This is Celebrity  = "<<candidate<<endl;
        }
        else{
            cout<<"No Celeberity!!";
            return 0;
        }
 
    }

    /*
    #include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int M[n][n];

    // input matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> M[i][j];
        }
    }

    stack<int> st;

    // sab log stack me daalo
    for(int i=0;i<n;i++)
        st.push(i);

    int first, second;

    // elimination process
    while(st.size()>1)
    {
        first = st.top();
        st.pop();

        second = st.top();
        st.pop();

        if(M[first][second] == 1)
            st.push(second);
        else
            st.push(first);
    }

    int candidate = st.top();

    // verification
    for(int i=0;i<n;i++)
    {
        if(i != candidate)
        {
            if(M[candidate][i] == 1 || M[i][candidate] == 0)
            {
                cout << "No Celebrity";
                return 0;
            }
        }
    }

    cout << "Celebrity is: " << candidate;

    return 0;
}
    */
    
