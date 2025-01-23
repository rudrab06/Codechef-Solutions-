#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(abs(b-a)%8==0){
	        cout<<(b-a)/8<<endl;
	    }
	    else{
	        cout<<abs(b-a)/8 + 1 <<endl;
	    }


}
return 0;

}