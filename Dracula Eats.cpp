#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int count=0;
	    cin>>n;
	    if(n<2){
	        cout<<0<<endl;
	    }
	    else{
	        for(int i=2;i<=n;i=i+7){
	            count++;
	            
	        }
	    cout<<count<<endl;
	    }
	    
	    
	}
	return 0;

}
