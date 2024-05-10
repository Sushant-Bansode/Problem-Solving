#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, q;
    cin >> n >> m >> q;
    long long a[n][m];
    long long pr[n + 1][m + 1];
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            pr[i][j] = a[i][j] + pr[i - 1][j] + pr[i][j - 1] - pr[i - 1][j - 1];
        }
    }
    while (q--)
    {
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << (pr[x2][y2] - pr[x1 - 1][y2] - pr[x2][y1 - 1] + pr[x1 - 1][y1 - 1]) << "\n";
    }
    return 0;
}