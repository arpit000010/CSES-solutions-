#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> v(n);

    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        v[i] = {num, i + 1};
    }

    sort(v.begin(), v.end());

    bool flag = false;
    for (ll i = 0; i < n - 2; i++)
    {
        ll l = i + 1, r = n - 1;
        while (l < r)
        {
            ll s = v[i].first + v[l].first + v[r].first;
            if (s == x)
            {
                vector<ll> ans = {v[i].second, v[l].second, v[r].second};
                sort(ans.begin(), ans.end());
                cout << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
                flag = true;
                break;
            }
            if (s > x)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        if (flag)
            break;
    }

    if (!flag)
        cout << "IMPOSSIBLE" << endl;

    return 0;
}
