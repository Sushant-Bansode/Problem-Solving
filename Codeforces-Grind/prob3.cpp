#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;

    if (n == 0)
    {
        cout << 1 << ' ' << 3 << ' ' << 4 << ' ' << 5 << endl;
        return;
    }
    long long arr[4] = {};
    arr[0] = arr[1] = arr[2] = n;
    long long k = 0;
    for (long long i = 0; i < 60; i++)
    {
        if (!(n & (1 << i)))
        {
            arr[k] += (1 << i);
            if (k == 2)
            {
                arr[3] += (1 << i);
            }
            k = k + 1;
            k = k % 3;
        }
    }

    if (arr[3] == 0)
        cout << -1 << endl;
    else
    {
        for (auto i : arr)
            cout << i << ' ';
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
