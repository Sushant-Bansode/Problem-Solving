#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> arr(n);
    map<long long, long long> mp;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    sort(arr.begin(), arr.end());
    if (mp.size() == 1)
    {
        long long ans = n * (n - 1);
        cout << ans << endl;
    }
    else
    {
        long long count = mp[arr[0]] * mp[arr[n - 1]] * 2;
        cout << count << endl;
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
    return 0;
}