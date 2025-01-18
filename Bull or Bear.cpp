#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if (x-y==0){
	        cout<<"NEUTRAL"<<endl;
	    }
	    if (y-x>0){
	        cout<<"PROFIT"<<endl;
	    }
	    if (y-x<0){
	        cout<<"LOSS"<<endl;
	    }
	}
	return 0;

}
