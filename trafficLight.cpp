#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long long x;
    int n;
    cin >> x >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++)
        cin >> v[i];

    set<pair<long long, long long>> range;
    multiset<long long> length;

    range.insert({0, x});
    length.insert(x);

    for (long long i = 0; i < n; i++)
    {
        long long pos = v[i];
        auto it = range.upper_bound({pos, 0});
        it--;

        long long start = it->first;
        long long end = it->second;

        auto oldL = length.find(end - start);
        length.erase(oldL);
        length.insert(pos - start);
        length.insert(end - pos);
        range.erase(it);
        range.insert({start, pos});
        range.insert({pos, end});

        cout << *length.rbegin() << " ";
    }
}