#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr.begin() + 1, arr.end());
    long long ans = arr[0];

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > ans)
        {
            ans = ans + (arr[i] - ans + 1) / 2;
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