#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b;
	    if(a<b){
	        cout<<0<<endl;
	    }
	    else{
	    c=a-b;
	    if (c%4==0){
	    cout<<c/4<<endl;
	}
	    else{
	        cout<<c/4 +1 <<endl;
	    } }

}
return 0;  }
