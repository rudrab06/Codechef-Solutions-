#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a/b > c/d){
	        cout<<"Alice\n";
	    }
	    else if(a/b < c/d){
	        cout<<"Bob\n";
	    }
	    else{
	        cout<<"Equal\n";
	    }
	}
	return 0;

}
