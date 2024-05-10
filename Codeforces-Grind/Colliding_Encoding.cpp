#include <bits/stdc++.h>
using namespace std;
// #define int long long

string solve()
{
    vector<int> arr(26);
    for (int i = 0; i < 26; i++)
    {
        cin >> arr[i];
    }
    map<char, int> mp;
    for (int i = 0; i < 26; ++i)
    {
        mp['A' + i] = arr[i];
    }

    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    //   vector<string> temp(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].length(); ++j)
        {
            v[i][j] = mp[v[i][j]];
        }
    }
    map<string, int> mp1;
    for (auto x : v)
    {
        mp1[x]++;
    }
    //  cout << mp1.size() << " " << v.size() << endl;
    if (mp1.size() == n)
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        string s = solve();
        cout << "Case #" << i << ": " << s << endl;
    }
    return 0;
}