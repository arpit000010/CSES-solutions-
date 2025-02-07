#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();

    int i = 0, j = 0;
    int maxLen = 0;

    char currChar = s[0];
    while (j < n)
    {
        if (s[j] == currChar)
            maxLen = max(maxLen, j - i + 1);
        else
        {
            currChar = s[j];
            i = j;
        }
        j++;
    }
    cout << maxLen << endl;

    return 0;
}