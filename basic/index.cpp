#include <iostream>
using namespace std;
int main() {
	// int n;
	// cin >> n;

	// string s;
	// cin>>s;

	// for(int i=0 ; i<n-1 ; i++){
	// 	if(s[i] == 'H' && s[i+1] == 'H'){
	// 		cout<<"No";
	// 		return 0;
	// 	}
	// }

	// for(int i =0 ;i<n ;i++){
	// 	if(s[i] == '.'){
	// 		s[i] ='B';
	// 	}
	// }
	// cout<<"Yes";
	// cout<<s;
	// }
int n=5;
int arr[n] = {1,2,3,4,5};

for(int st=0 ;st<n ;st++){
	for(int end=st; end<n ; end++){
		for(int i=st ; i<= end ;i++){
			cout<<arr[i];
		}
		cout<< " ";
	}
	cout<<endl;
 }
return 0;
}

// g++ index.cpp -o main
// ./main

// ye command run kerne se chal jae ga 
// index.cpp ki jhga file ka 
// ek min try krta hu
// hr bAAR REPEAT KARNI HOGI hn an koi or option ni h?? nhi  dono command sath m ker skta h ok yu b thik hai phir toh baaki koi dikkt aai toh dobara puch lunga baaki isme dikkt kya thi sayad install glt ker rekha tha ok bhai merko toh just coding krni hai thodi bht hn bki terminal m folder check ker liyo shi fok bro thankuu bro kkoi n welcome kardu stop
