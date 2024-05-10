#include <bits/stdc++.h>
using namespace std;

// Function that returns true if array is
// sorted in non-decreasing order.
bool arraySortedOrNot(int a[], int n)
{

    if (n == 1 || n == 0)
    {
        return true;
    }
    return a[n - 1] >= a[n - 2] &&
           arraySortedOrNot(a, n - 1);
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int avg = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i > 0 && arr[i - 1] > arr[i])
        {
            int temp = (arr[i - 1] + arr[i] + 1) / 2;
            avg = max(avg, temp);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        arr[i] -= avg;
        arr[i] = abs(arr[i]);
    }

    if (arraySortedOrNot(arr, n))
    {
        cout << avg << endl;
    }
    else
        cout << -1 << endl;
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