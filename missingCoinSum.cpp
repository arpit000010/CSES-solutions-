#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll solve(vector<ll> &arr, ll N)
{
    ll X = 1LL;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > X)
        {
            return X;
        }
        X += arr[i];
    }
    return X;
}

int main()
{
    ll N;
    cin >> N;

    vector<ll> arr(N);
    for (ll i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    cout << solve(arr, N) << endl;
    return 0;
}