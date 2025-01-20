#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if((a>(c+b+d))|| (b>(a+c+d)) || (c>(a+b+d)) || (d>(c+b+a))){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;

}