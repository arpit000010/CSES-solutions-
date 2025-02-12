#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int noOfTower = 0;
    multiset<int> mt;

    for (int i = 0; i < n; i++)
    {
        if (mt.upper_bound(v[i]) == mt.end())
        {
            mt.insert(v[i]);
            noOfTower++;
        }
        else
        {
            mt.erase(mt.upper_bound(v[i]));
            mt.insert(v[i]);
        }
    }
    cout << noOfTower << endl;

    return 0;
}