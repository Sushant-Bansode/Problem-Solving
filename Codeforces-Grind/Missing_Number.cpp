#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if (v[0] != 1)
    {
        cout << 1 << endl;
        return 0;
    }
    else if (v[n - 2] != n)
    {
        cout << n << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (v[i + 1] - v[i] == 2)
            {
                cout << v[i] + 1 << endl;
            }
        }
    }
    return 0;
}
