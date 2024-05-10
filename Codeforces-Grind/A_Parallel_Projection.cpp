#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int w, d, h;
    cin >> w >> d >> h;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    long long ans = 0;
    ans += h;
    long long a = abs(abs(d - y1) + abs(x2 - x1) + abs(d - y2));
    long long b = abs(abs(y1) + abs(x2 - x1) + abs(y2));
    long long c = abs(abs(w - x1) + abs(y2 - y1) + abs(w - x2));
    long long d1 = abs(abs(x1) + abs(y2 - y1) + abs(x2));
    ans += min(min(a, b), min(c, d1));
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