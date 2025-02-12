#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int i = 0, j = 0;
    map<long long, int> mp;
    int maxLength = 0;
    while (j < n)
    {
        mp[v[j]]++;
        while (mp[v[j]] > 1)
        {
            mp[v[i]]--;
            i++;
        }
        maxLength = max(maxLength, (j - i + 1));
        j++;
    }
    cout << maxLength << endl;
    return 0;
}