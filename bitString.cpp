#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    long long result = 1;
    long long mod = 1000000007;
    long long b = 2;
    while (n > 0)
    {
        if (n & 1)
        {
            result = (result * b) % mod;
        }
        b = (b * b) % mod;
        n >>= 1;
    }
    cout << result << endl;
}
