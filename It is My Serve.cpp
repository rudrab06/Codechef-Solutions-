#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if((a+b)%4==0 or(a+b)%4==1) {
	        cout<<"Alice\n";
	    }
	    else if((a+b)%4==2 or(a+b)%4==3){
	        cout<<"Bob\n";
	    }
	    }
    return 0;
}
	    