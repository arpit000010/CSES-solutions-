#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int M=1000000007;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        ll a, b;
        cin>>a>>b;
        ll ans=1;
        while(b>0){
            if(b&1) ans=(ans*a*1ll)%M;
            a=(a*a*1ll)%M;
            b>>=1;
        }
        cout<<ans<<endl;
    }
}
