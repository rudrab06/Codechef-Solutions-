#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    int d=b/30;
	    if((n+d)%a==0){
	        cout<<(n+d)/a<<endl;
	    }
	    else{
	    cout<<(n+d)/a+1<<endl;}
	}
	return 0;

}
