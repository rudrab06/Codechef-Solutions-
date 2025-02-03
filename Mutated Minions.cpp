#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,ct=0;
	    cin>>a>>b;
	    int arr[a];
	    for(int i=0;i<a;i++){
	        cin>>arr[i];
	    }
	    
	    for(int i=0;i<a;i++){
	        if((arr[i]+b)%7==0){
	            ct++;
	        }
	    }
	    cout<<ct<<endl;
	    
	}
	return 0;

}
