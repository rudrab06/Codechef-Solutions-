#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int consonant=0;
	    for(int i=0;i<n;i++){
	        if((s[i]!='a') and (s[i]!='e') and (s[i]!='i') and (s[i]!='o') and (s[i]!='u')){
	            consonant++;
	            if(consonant==4)
	            {
	                break;
	            }
	        }
	        else{
	            consonant=0;
	        } }
	   if (consonant>=4){
	       cout<<"No"<<endl;
	   }
	   else{
	       cout<<"Yes"<<endl;
	   }
	        
	        
	    }
	  return 0;
	    
	}
