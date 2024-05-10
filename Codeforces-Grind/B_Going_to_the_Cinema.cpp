#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    // If mp[0] == 0 that means, any-one goes or not other case he is happy...
    if (mp[0] == 0)
    {
        ans = 2;
    }
    else
    {
        ans = 1;
    }

    sort(arr, arr + n);

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] <= i && arr[i + 1] > i + 1)
        {
            ans++;
        }
    }
    cout << ans << endl;
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