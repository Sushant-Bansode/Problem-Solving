#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n % 2050 != 0)
        {
            cout << -1 << "\n";
            continue;
        }
        n /= 2050;
        int ans = 0;
        while (n != 0)
        {
            ans += (n % 10);
            n /= 10;
        }
        cout << ans << "\n";
    }
    return 0;
}