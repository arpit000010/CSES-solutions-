#include <bits/stdc++.h>

using namespace std;

bool comp(pair<long, long> &a, pair<long, long> &b) { return a.second < b.second; }

int main()
{
    int n;
    cin >> n;

    vector<pair<long, long>> vp;

    for (int i = 0; i < n; i++)
    {
        long long x, y;
        cin >> x >> y;
        vp.push_back({x, y});
    }

    sort(vp.begin(), vp.end(), comp);
    int maxWatched = 0;
    long long currEnd = LLONG_MIN;

    for (int i = 0; i < n; i++)
    {
        if (vp[i].first >= currEnd)
        {
            maxWatched++;
            currEnd = vp[i].second;
        }
    }
    cout << maxWatched << endl;

    return 0;
}