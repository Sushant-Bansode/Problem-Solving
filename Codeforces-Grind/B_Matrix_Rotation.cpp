#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int arr[2][2];
    cin >> arr[0][0] >> arr[0][1];
    cin >> arr[1][0] >> arr[1][1];
    int mn = min(min(arr[0][0], arr[0][1]), min(arr[1][0], arr[1][1]));
    int mx = max(max(arr[0][0], arr[0][1]), max(arr[1][0], arr[1][1]));
    if ((arr[0][0] == mn && arr[1][1] == mx) ||
        (arr[1][1] == mn && arr[0][0] == mx) ||
        (arr[0][1] == mn && arr[1][0] == mx) ||
        (arr[1][0] == mn && arr[0][1] == mx))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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