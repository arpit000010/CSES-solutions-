#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;
        if((a+b)%3!=0) cout<<"NO"<<endl;
        else if((a>2*b)||(b>2*a)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
