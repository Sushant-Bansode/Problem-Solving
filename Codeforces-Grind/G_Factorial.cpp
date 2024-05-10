#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long ans = 1;
    for (int i = 1; i <= n; ++i)
    {
        ans *= i;
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