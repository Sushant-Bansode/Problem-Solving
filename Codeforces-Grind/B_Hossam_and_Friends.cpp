#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void solve()
{
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    long long result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);
    if (result == 1)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}