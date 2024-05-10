#include "bits/stdc++.h"
using namespace std;

bool issub(vector<int> a, vector<int> b)
{
    int n = a.size(), m = b.size();
    int i = 0, j = 0;
    while (i < n and j < m)
    {
        if (a[i] == b[j])
        {
            i++;
            j++;
            if (j == m)
            {
                return true;
            }
        }
        else
        {
            i = i - j + 1;
            j = 0;
        }
    }
    return false;
}

void solve(int t)
{
    cout << "Case #" << t << ": ";
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    if (a == b)
    {
        if (k % 2 == 0 && k!=1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
        return;
    }
    if (n == 2)
    {
        if (k % 2)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        a.push_back(a[i]);
    }
    if (issub(a, b) && k > 0)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 1; i < t + 1; i++)
    {
        solve(i);
    }

    return 0;
}