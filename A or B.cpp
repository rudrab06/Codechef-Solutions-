#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int c,d;
	    c=500-a*2 + 1000-(a+b)*4;
	    d=1000-b*4 + 500-(a+b)*2;
	    cout<< max(c,d)<<endl;
	}
	return 0;

}