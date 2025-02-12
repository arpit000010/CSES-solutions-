#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n, q;
    cin >> n >> q;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i > 0)
            v[i] = v[i - 1] + v[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 1)
            cout << v[r - 1] << endl;
        else
            cout << v[r - 1] - v[l - 2] << endl;
    }
}