#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long sumT = (1LL * n * (n + 1)) / 2;

    if (sumT % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    set<int> set1, set2;
    long long halfSum = sumT / 2;
    long long currentSum = 0;

    for (int i = n; i >= 1; --i)
    {
        if (currentSum + i <= halfSum)
        {
            set1.insert(i);
            currentSum += i;
        }
        else
        {
            set2.insert(i);
        }
    }

    cout << set1.size() << endl;
    for (int num : set1)
    {
        cout << num << " ";
    }
    cout << endl;

    cout << set2.size() << endl;
    for (int num : set2)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
