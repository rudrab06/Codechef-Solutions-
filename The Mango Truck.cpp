#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if (b<c){
	        cout<<(c-b)/a<<endl;
	    }
	    if (b==c || a==0) {
	        cout<<0<<endl;
	    }
	}
	return 0;
}