#include <bits/stdc++.h>

using namespace std;

void solve1(string ip, string op, long long &count, vector<string> &ans)
{
    if (ip.length() == 0)
    {
        ans.push_back(op);
        count++;
        return;
    }
    set<char> st;
    for (long long i = 0; i < ip.length(); i++)
    {
        if (st.find(ip[i]) == st.end())
        {
            st.insert(ip[i]);
            solve1(ip.substr(0, i) + ip.substr(i + 1), op + ip[i], count, ans);
        }
    }
}

int main()
{
    string s;
    cin >> s;
    long long count = 0;
    vector<string> ans;
    sort(s.begin(), s.end());
    solve1(s, "", count, ans);
    cout << count << endl;
    for (auto i : ans)
    {
        cout << i << endl;
    }

    return 0;
}
