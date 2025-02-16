#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> nums(n);

    long long maxNum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        maxNum = max(maxNum, nums[i]);
    }

    vector<long long> count(maxNum + 1, 0);

    for (int i = 0; i < n; i++)
    {
        count[nums[i]]++;
    }

    for (long long num = maxNum; num >= 1; num--)
    {
        long long total = 0;

        for (long long j = num; j <= maxNum; j += num)
        {
            total += count[j];
        }

        if (total >= 2)
        {
            cout << num;
            return 0;
        }
    }

    return 0;
}
