#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    if(n%2==0){
	        cout<<a*(n/2)+b*(n/2)<<endl;
	    }
	    else{
	        cout<<a*(n/2) + b*(n/2 +1)<<endl;
	    }
	}
	return 0;

}
