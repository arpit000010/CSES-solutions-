#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> getDigit(int n)
{
    vector<int> ans;
    while (n)
    {
        if (n % 10 != 0)
            ans.push_back(n % 10);
        n /= 10;
    }
    return ans;
}

vector<int> dp;
int ftd(int n)
{
    if (n == 0)
        return 0;
    if (n <= 9)
        return 1;
    if (dp[n] != -1)
        return dp[n];

    vector<int> d = getDigit(n);
    int result = INT_MAX;
    for (int i = 0; i < d.size(); i++)
    {
        result = min(result, ftd(n - d[i]));
    }
    return dp[n] = 1 + result;
}

int main()
{
    int n;
    cin >> n;

    dp.clear();
    dp.resize(1000005, -1);
    cout << ftd(n) << endl;
    return 0;
}