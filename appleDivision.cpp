#include <bits/stdc++.h>

using namespace std;

long long solve(long long idx, long long sum1, long long sum2, vector<long long> &v)
{
    if (idx == v.size())
        return abs(sum1 - sum2);
    long long ans1 = solve(idx + 1, sum1 + v[idx], sum2, v);
    long long ans2 = solve(idx + 1, sum1, sum2 + v[idx], v);
    return min(ans1, ans2);
}

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << solve(0, 0, 0, v) << endl;

    return 0;
}