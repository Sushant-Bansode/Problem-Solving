#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> a)
{
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (check(a))
    {
        cout << 0 << endl;
        return;
    }
    vector<vector<int>> ans;
    vector<int> prev = a;
    priority_queue<int, vector<int>, greater<int>> pq;

    int cnt = 0;
    while (check(a) == false)
    {
        for (int i = 0; i < n; ++i)
        {
            pq.push(a[i]);
        }
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != pq.top())
            {
                a[i] = ceil(pq.top() / a[i]);
            }
        }
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