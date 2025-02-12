#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<long long> ind(n + 1);
    for (int i = 0; i < n; i++)
        ind[v[i]] = i;
    int ans = 1;

    for (int i = 1; i < n; i++)
    {
        if (ind[i + 1] < ind[i])
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
