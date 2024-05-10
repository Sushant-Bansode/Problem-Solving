#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        s1 += a[i];
    }

    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
        s2 += b[i];
    }
    if (s1 == s2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}