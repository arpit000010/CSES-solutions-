#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long maxSum = LLONG_MIN, currSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0)
            currSum = 0;
    }
    cout << maxSum << endl;

    return 0;
}