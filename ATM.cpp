#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a;
	float c,b;
	cin>>a>>b;
	if(a%5==0){
	    if(a+0.50<=b){
	        c=b-a-0.50;
	        cout<<c<<endl;
	    }
	    else{
	        cout<<b<<endl;
	    }
	}
	else{
	    cout<<b<<endl;
	}
	return 0;

}
