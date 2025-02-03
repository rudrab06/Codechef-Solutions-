#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;;
	    int arr[a];
	    int sum=0;
	    for(int i=0;i<a;i++){
	        cin>>arr[i];
	        sum=sum+arr[i];
	        
	    }
	    if(sum%2==0){
	    cout<<abs(sum/2)<<endl;}
	    else{
	        cout<<-1<<endl;
	    }

}
return 0;}
