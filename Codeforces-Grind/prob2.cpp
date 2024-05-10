#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    string ans = "";
    if ((1 - n) > x || (n + 1) < x)
    {
        cout << -1 << endl;
        return;
    }
    else if ((1 - n) <= x && x <= (n + 1))
    {
        if (x < 0)
        {
            int sub = abs(x) + 1;
            int mul = n - sub;
            for (int i = 0; i < sub; ++i)
            {
                ans += '-';
            }
            for (int i = 0; i < mul; ++i)
            {
                ans += '*';
            }
        }
        else if (x > 0)
        {
            int plu = abs(x) - 1;
            int mul = n - plu;
            for (int i = 0; i < plu; ++i)
            {
                ans += '+';
            }
            for (int i = 0; i < mul; ++i)
            {
                ans += '*';
            }
        }
        else if (x == 0)
        {
            int mul = (n - 1);
            for (int i = 0; i < mul; ++i)
            {
                ans += '*';
            }
            ans += '-';
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
