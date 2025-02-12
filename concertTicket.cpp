#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> np(n), mp(m);
    multiset<int> ms;
    
    for (int i = 0; i < n; i++) {
        cin >> np[i];
        ms.insert(np[i]);
    }
    for (int i = 0; i < m; i++) {
        cin >> mp[i];
    }
    
    for (int i = 0; i < m; i++) {
        auto itr = ms.upper_bound(mp[i]);
        if (itr == ms.begin()) {
            cout << -1 << endl;
        } else {
            --itr;
            cout << *itr << endl;
            ms.erase(itr);
        }
    }
    
    return 0;
}
