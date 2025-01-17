#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a>b and c>a) or (b>a and a>c)){
            cout<<a<<endl;
        }
        if((b>a and c>b) or (a>b and b>c)){
            cout<<b<<endl;
        }
        if((c>a and b>c) or (a>c and c>b)){
            cout<<c<<endl;
        }

    
    }
    return 0;
}