#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (auto x : arr)
    {
        sum += x;
    }
    if (sum % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        int ans = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] % 2 == 0)
            {
                int count2 = 0;
                while (arr[i] % 2 != 1)
                {
                    count2++;
                    arr[i] /= 2;
                }
                ans = min(ans, count2);
            }
            else
            {
                int count1 = 0;
                while (arr[i] % 2 != 0)
                {
                    count1++;
                    arr[i] /= 2;
                }
                ans = min(ans, count1);
            }
        }
        cout << ans << endl;
        return;
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