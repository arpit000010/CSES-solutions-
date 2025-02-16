#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<long long, long long> freq;
    freq[0] = 1;

    long long sum = 0, count = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        count += freq[sum - x];
        freq[sum]++;
    }

    cout << count << endl;
    return 0;
}
