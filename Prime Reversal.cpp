#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, N;
	cin>>t;
	while(t--){
	    cin>>N;
	    string A = "", B = "";
	    cin>>A>>B;
	    if( count(A.begin(), A.end(), '1') ==  count(B.begin(), B.end(), '1') ) 
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}