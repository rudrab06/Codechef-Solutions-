#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a>b){
	        cout<<b<<endl;
	    }
	    if(b>a){
	        cout<<a<<endl;
	    }
	    if(b==a){
	        cout<<a<<endl;
	    }
	    
	}
	return 0;

}