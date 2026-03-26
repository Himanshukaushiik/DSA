    // F(n)= (1) +(2*3) + (4*5*6) ...n this sequence 

    #include<iostream>
    using namespace std;

    int sequence(int n){
        if (n == 0)
        {
            return 1;
        }

        int cut = ((n*(n+1))/2)+1; // cut = (2*3)/2 + 1 matlab 4 se shuru hoga 4*5*6
        
        int res = 1;

        for (int i = cut; i < cut+n+1; i++)
        {
            res*=i;
        }
        
        res+=sequence(n-1);
        return res;
        
    }


    int main(){
        int t;
        cin>>t;
        while(t--){

            int n ;
            cin>>n;   
            cout<<sequence(n-1);
        }
    }