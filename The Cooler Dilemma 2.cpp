#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(b>a and b%a!=0){
	        cout<<b/a<<endl;
	    }else if(b>a and b%a==0){
	        cout<<b/a-1<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;

}
