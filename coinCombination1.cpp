#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main()
{
    int n, sum;
    cin >> n >> sum;
    vector<int> coin(n);
    for (int i = 0; i < n; i++)
        cin >> coin[i];

    vector<int> dp(sum + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= sum; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (coin[j] <= i)
            {
                dp[i] = (dp[i] + dp[i - coin[j]]) % mod;
            }
        }
    }

    cout << dp[sum] << "\n";
    return 0;
}
