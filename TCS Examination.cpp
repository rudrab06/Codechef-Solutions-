#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int sum1=0,sum2=0;
	    int a[3],b[3];
	    for(int i=0;i<3;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<3;i++){
	        cin>>b[i];
	    }
	    for(int i=0;i<3;i++){
	        sum1=sum1 + a[i];
	        sum2=sum2 +b[i];	    }
	if(sum1==sum2){
	    if(a[0]==b[0]){
	        if(a[1]==b[1]){
	            if(a[2]==b[2]){
	                cout<<"TIE\n";
	            }
	            else{
	                if(a[2]>b[2]){
	                    cout<<"Dragon"<<endl;
	                }
	                else{
	                    cout<<"Sloth"<<endl;
	                }
	            }
	        }
	        else{
	                if(a[1]>b[1]){
	                    cout<<"Dragon"<<endl;
	                }
	                else{
	                    cout<<"Sloth"<<endl;
	                }
	            }
	        
	    }
	    else{
	                if(a[0]>b[0]){
	                    cout<<"Dragon"<<endl;
	                }
	                else{
	                    cout<<"Sloth"<<endl;
	                }
	            }
	}
	else{
	                if(sum1>sum2){
	                    cout<<"Dragon"<<endl;
	                }
	                else{
	                    cout<<"Sloth"<<endl;
	                }
	            }

} return 0;}
