#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> v)
{
    bool flag = true;
    for (int i = 0; i < v.size() - 1; ++i)
    {
        if (v[i] > v[i + 1])
        {
            flag = false;
        }
    }
    return flag;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    vector<vector<int>> ans;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            vector<int> temp;
            for (int k = i; k <= j; k++)
            {
                temp.push_back(arr[k]);
            }
            ans.push_back(temp);
        }
    }
    int count = 0;
    for (auto x : ans)
    {
        if (check(x) == true)
        {
            count++;
        }
    }
    cout << count << endl;
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