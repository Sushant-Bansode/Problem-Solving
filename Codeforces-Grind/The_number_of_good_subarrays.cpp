#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> arr(n, 0);
    for (long long i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    unordered_set<long long> ans, prev;

    for (long long i = 0; i < n; i++)
    {
        unordered_set<long long> ne;

        for (auto x : prev)
        {
            ne.insert(arr[i] | x);
        }
        ne.insert(arr[i]);

        for (auto x : ne)
            ans.insert(x);

        prev = ne;
    }

    long long ret = 0;
    for (auto x : ans)
    {
        if (x != 0 && x <= k)
        {
            ret++;
        }
    }

    cout << ret << endl;
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
