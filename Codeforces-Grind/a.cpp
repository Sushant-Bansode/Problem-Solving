#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int ans = 0;
        for (int i = 1; i < x; ++i)
        {
            if ((__gcd(x, i) + i) == x)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}