#include <iostream>
#include <vector>
#include <climits>

using namespace std;

#define mod 1000000007

vector<long long int> dp(1000005, -1);
long long int f(int n)
{
    if (n == 0)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    long long int sum = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (n - i < 0)
            break;
        sum = (sum % mod + f(n - i) % mod) % mod;
    }
    return dp[n] = sum % mod;
}

int main()
{
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}