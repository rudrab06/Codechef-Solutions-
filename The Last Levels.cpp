#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a<=3){
	        cout<<a*b<<endl;
	    }
	    else{
	        if(a%3==0){
	            cout<<a*b+c*((a/3)-1)<<endl;
	        }
	        else{
	            cout<<a*b+c*(a/3)<<endl;
	        }
	    }
	}
return 0;}