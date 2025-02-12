#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        int count = 0;
        for(int i = 1; i <= sqrt(x); i++) {
            if(x % i == 0) {
                count++;
                if((x / i) != i) count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
