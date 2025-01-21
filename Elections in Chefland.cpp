#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,x;
	    cin>>a>>x;
	    int arr[a];
	    for(int i=0;i<a;i++){
	        cin>>arr[i];
	    }
	    int ct=0;
	    for(int i=0;i<a;i++){
	        if(x<=arr[i]){
	            ct++;
	        }
	    }
	    cout<<ct<<endl;
	    
	}
	return 0;

}