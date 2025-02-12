#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long x;
    cin >> x;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int i = 0, j = n - 1;
    int count = 0;
    while (i <= j)
    {
        if (v[i] + v[j] <= x)
        {
            count++;
            i++;
            j--;
        }
        else
        {
            count++;
            j--;
        }
    }
    cout << count << endl;
    return 0;
}