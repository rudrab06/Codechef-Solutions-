#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a[4];
	for(int i=0;i<4;i++){
	    cin>>a[i];
	}
	int week=0;
	for(int i=0;i<4;i++){
	    if(a[i]>=10){
	        week++;
	    }
	}
	cout<<week<<endl;
}