#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long l, r, m;
    cin >> l >> r >> m;
    long long ans = l;
    for (int i = l + 1; i <= r; ++i)
    {
        long long a = ans % m;
        long long b = i % m;
        ans = (a * b) % m;
    }
    cout << ans << endl;
}
