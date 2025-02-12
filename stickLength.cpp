#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int mid=-1;
    sort(v.begin(), v.end());
    if(n&1) mid=v[(n/2)];
    else mid=v[n/2];

    long long minC=0;
    
    for(int i=0;i<n;i++){
        minC+=(abs(mid-v[i]));
    }
    cout<<minC<<endl;
    
}
