#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    if(n>=a){
	        cout<<"Pizza"<<endl;
	    }
	    else if(n>=b and n<a){
	        cout<<"Burger"<<endl;
	    }
	    else{
	        cout<<"Nothing"<<endl;
	    }
	}
	return 0;

}
