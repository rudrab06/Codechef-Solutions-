#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long a;
	    cin>>a;
	    long long fact=1;
	    for(int i=1;i<=a;i++){
	        fact=fact*i;
	    }
	    cout<<fact<<endl;
	}
	return 0;

}