#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, r, s;
    cin >> n >> s >> r;
    vector<int> ans(n);
    int maxai = s - r;
    ans[n - 1] = maxai;
    for (int i = 0; i < n - 1; ++i)
    {
        ans[i] = 1;
        r = r - 1;
    }
    int i = 0;
    while (r != 0)
    {
        if (ans[i] < maxai)
        {
            ans[i] = ans[i] + 1;
            r = r - 1;
        }
        else
        {
            i++;
        }
    }
    sort(ans.begin(), ans.end());
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
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