#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k, n;
    cin >> k >> n;
    if (n == k)
    {
        for (int i = 1; i <= n; ++i)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    else
    {
        vector<int> ans;
        int print = 1;
        ans.push_back(print);
        for (int i = 1; i < k; i++)
        {
            if (n - print - i + 1 >= k - i)
            {
                print += i;
            }
            else
                print++;
            ans.push_back(print);
        }
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
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