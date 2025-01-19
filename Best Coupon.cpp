#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if((n/10)>100){
	        cout<<n/10<<endl;
	    }
	    else{
	        cout<<100<<endl;
	    }
	}
	return 0;

}