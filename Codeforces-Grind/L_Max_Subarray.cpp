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
    int maxele;
    for (int i = 0; i < n; ++i)
    {
        ans.push_back(arr[i]);
        maxele = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > maxele)
            {
                maxele = arr[j];
            }
            ans.push_back(maxele);
        }
    }
    for (auto x : ans)
    {
        cout << x << " ";
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