#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }

    cout << ((n * (n + 1ll)) / 2) - sum << endl;
}