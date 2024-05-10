#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int x = -1 * m;
    for (auto k : mp)
    {
        if (k.first != x)
        {
            cout << x << endl;
            break;
        }
        else
        {
            x++;
            continue;
        }
    }
}