#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if((a-c)>(b-d)){
	        cout<<"Second"<<endl;
	    }
	    if((a-c)<(b-d)){
	        cout<<"First"<<endl;
	    }
	    if((a-c)==(b-d)){
	        cout<<"any"<<endl;
	    }
	}
	return 0;

}
