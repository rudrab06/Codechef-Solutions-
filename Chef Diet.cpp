#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b;
	    int arr[a];
	    int remaining=0;
	    for(int i=0;i<a;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<a;i++){
	        c=arr[i]-b+remaining;
	        remaining=0;
	        remaining=remaining+c;
	        if(c<0){
	            cout<<"NO"<<" "<< i+1<<endl;
	            break;
	        } }
	    if(remaining>=0){
	        cout<<"Yes"<<endl;
	    }
	    }
	    return 0;
	    
	}

