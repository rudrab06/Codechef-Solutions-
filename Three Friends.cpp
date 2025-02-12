#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if((x>y) and (x>z)){
	        if((x-(y+z))==0){
	            cout<<"yes"<<endl;
	        }
	        else{
	            cout<<"no"<<endl;
	        }
	    }
	    else if((y>x) and (y>z)){
	        if((y-(x+z))==0){
	            cout<<"yes"<<endl;
	        }
	        else{
	            cout<<"no"<<endl;
	        }
	    }
	    else if((z>x) and (z>y)){
	        if((z-(x+y))==0){
	            cout<<"yes"<<endl;
	        }
	        else{
	            cout<<"no"<<endl;
	        }
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	    
	}
	return 0;

}
