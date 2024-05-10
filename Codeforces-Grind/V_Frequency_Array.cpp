#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    for (int i = 1; i <= m; ++i)
    {
        cout << mp[i] << endl;
    }
}