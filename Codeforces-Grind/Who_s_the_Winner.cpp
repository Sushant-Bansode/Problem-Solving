#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;
    map<string, string> mp;
    for (int i = 0; i < n; ++i)
    {
        string s1, s2;
        cin >> s1;
        cin >> s2;
        mp[s1] = s2;
    }
    vector<pair<int, string>> v1;
    for (int i = 0; i < m; ++i)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        if (mp.find(s) != mp.end())
        {
            v1.push_back({x, s});
        }
    }
    sort(v1.begin(), v1.end());
    long long h = v1.size();
    long long x = min(k, h);
    for (int i = 0; i < x; ++i)
    {
        cout << i + 1 << " ";
        cout << v1[i].second << " ";
        cout << mp[v1[i].second] << endl;
    }
}