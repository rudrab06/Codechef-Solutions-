#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int ct=0,max=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(arr[i]==arr[j]){
	                ct++;
	            }
	        }
	        if(ct>=max){
	            max=0;
	            max=ct+max;
	        }
	        ct=0;
	    }
	    cout<<n-max<<endl; }
	    return 0;

}
