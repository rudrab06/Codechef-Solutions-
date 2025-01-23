#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a[4];
	    for(int i=0;i<4;i++){
	        cin>>a[i];
	    }
	    if(abs(a[0]-a[2])>=abs(a[1]-a[3])){
	        cout<<abs(a[0]-a[2])<<endl;
	    }
	    else{
	        cout<<abs(a[1]-a[3])<<endl;
	    }
	    
	}
	return 0;
}
