#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        long long m, n, p, ans = 0;
        cin >> m >> n >> p;
        long long arr[m][n];
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> arr[i][j];
            }
        }

        long long temp = 0;
        for (int i = 0; i < n; ++i)
        {

            for (int j = 0; j < m; ++j)
            {
                temp = max(arr[j][i], temp);
            }
            if (arr[p - 1][i] < temp)
                ans += abs(arr[p - 1][i] - temp);
            temp = 0;
        }

        cout << "Case #" << i << ": " << ans << endl;
    }
}