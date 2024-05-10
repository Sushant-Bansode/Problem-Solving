#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    vector<int> temp = arr;
    sort(temp.begin(), temp.end());
    int m1 = temp[n - 1];
    int m2 = temp[n - 2];

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == m1)
        {
            cout << arr[i] - m2 << " ";
        }
        else
            cout << arr[i] - m1 << " ";
    }
    cout << endl;
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