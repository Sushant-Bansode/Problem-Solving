#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int i = 0;
    int j = 0;
    for (j = 0; j < n; j++)
    {
        if (b[i] == a[j])
        {
            i++;
        }
    }

    if (i == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}