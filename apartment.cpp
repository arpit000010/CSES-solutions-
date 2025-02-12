#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    long long k;
    cin >> n >> m;
    cin >> k;

    vector<long long> desiredSize(n);
    for (int i = 0; i < n; i++)
        cin >> desiredSize[i];
    vector<long long> apartmentSize(m);
    for (int i = 0; i < m; i++)
        cin >> apartmentSize[i];
    sort(desiredSize.begin(), desiredSize.end());
    sort(apartmentSize.begin(), apartmentSize.end());
    int i = 0, j = 0;
    int count = 0;
    while (i < n && j < m)
    {
        if (abs(desiredSize[i] - apartmentSize[j]) <= k)
        {
            count++;
            i++;
            j++;
        }
        else if (desiredSize[i] < apartmentSize[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << count << endl;
    return 0;
}