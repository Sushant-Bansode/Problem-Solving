#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> v(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    priority_queue<long long> pq;
    long long ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == 0)
        {
            if (pq.empty() == false)
            {
                ans += pq.top();
                pq.pop();
            }
        }
        else if (v[i] != 0)
        {
            pq.push(v[i]);
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