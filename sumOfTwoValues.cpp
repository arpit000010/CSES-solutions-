#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = {x, i + 1};
    }

    sort(v.begin(), v.end());
    int low = 0, high = n - 1;
    bool flag = false;

    set<int> ans;

    while (low < high)
    {
        if (v[low].first + v[high].first == x)
        {
            ans.insert(v[low].second);
            ans.insert(v[high].second);
            for (auto itr : ans)
                cout << itr << " ";
            flag = true;
            break;
        }
        else if (v[low].first + v[high].first > x)
            high--;
        else
            low++;
    }
    if (!flag)
        cout << "IMPOSSIBLE" << endl;

    return 0;
}