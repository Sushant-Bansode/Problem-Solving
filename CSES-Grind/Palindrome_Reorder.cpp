#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto x : s)
    {
        mp[x]++;
    }
    int odd = 0;
    for (auto x : mp)
    {
        if (x.second % 2 == 1)
        {
            odd++;
        }
    }
    if (odd > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    char ch = 'a';
    bool flag = false;
    for (auto x : mp)
    {
        if (x.second % 2 == 1)
        {
            flag = true;
            ch = x.first;
        }
    }
    string ans = "";
    for (auto x : mp)
    {
        int k = x.second / 2;
        if (k != 0)
        {
            while (k--)
                ans += x.first;
        }
    }
    if (flag)
    {
        ans += ch;
    }
    string t = ans;
    if (flag)
    {
        t.pop_back();
    }
    reverse(t.begin(), t.end());
    ans = ans + t;
    cout << ans << endl;
}