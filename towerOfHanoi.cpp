#include <bits/stdc++.h>
using namespace std;

int minMove(int n) { return ((1 << n) - 1); }

void towerOfHanoi(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << a << " " << c << endl;
        return;
    }

    towerOfHanoi(n - 1, a, c, b);

    cout << a << " " << c << endl;

    towerOfHanoi(n - 1, b, a, c);
}

int main()
{
    // your code goes here
    int n;
    cin >> n;

    cout << minMove(n) << endl;
    towerOfHanoi(n, '1', '2', '3');
}