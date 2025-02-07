#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    long long sum = 0;
    int count = 0;
    int low = 0, high = 0;
    while (high < n)
    {
        sum += v[high];
        while (sum > x && low < high)
        {
            sum -= v[low];
            low++;
        }
        if (sum == x)
            count++;
        high++;
    }
    cout << count << endl;
    return 0;
}