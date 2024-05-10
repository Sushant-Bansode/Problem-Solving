#include <bits/stdc++.h>
using namespace std;

// Utility function to find
// GCD of 'a' and 'b'
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Returns LCM of array elements
long long findlcm(long long arr[], long long n)
{
    // Initialize result
    long long ans = arr[0];

    // ans contains LCM of arr[0], ..arr[i]
    // after i'th iteration,
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
               (gcd(arr[i], ans)));

    return ans;
}

void solve()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    long long temp = findlcm(arr, n);
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == temp)
        {
            cout << 0 << endl;
            return;
        }
    }
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " " << pow(log2(arr[i]) + 1, 2) - arr[i] << endl;
    }
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