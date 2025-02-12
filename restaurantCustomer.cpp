#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> arrivalTime(n);
    vector<long long> leavingTime(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arrivalTime[i] >> leavingTime[i];
    }

    sort(arrivalTime.begin(), arrivalTime.end());
    sort(leavingTime.begin(), leavingTime.end());

    int maxCustomer = 0, currCustomer = 0;
    int i = 0, j = 0;

    while (i < n && j < n)
    {
        if (arrivalTime[i] <= leavingTime[j])
        {
            currCustomer++;
            maxCustomer = max(maxCustomer, currCustomer);
            i++;
        }
        else
        {
            currCustomer--;
            j++;
        }
    }
    cout << maxCustomer << endl;

    return 0;
}