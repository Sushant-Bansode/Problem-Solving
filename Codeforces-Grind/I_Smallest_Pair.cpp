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
    vector<int> ans;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; j++)
        {
            int t = arr[i] + arr[j] + (j - i);
            ans.push_back(t);
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans[0] << endl;
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