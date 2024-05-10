#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    map<int, int> mp;
    mp[x1]++;
    mp[x2]++;
    mp[x3]++;
    map<int, int> mp2;
    mp2[y1]++;
    mp2[y2]++;
    mp2[y3]++;
    if (mp.size() == 2 && mp2.size() == 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}