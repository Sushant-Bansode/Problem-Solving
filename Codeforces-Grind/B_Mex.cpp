#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> a(n + 1);
    for (int i = 0; i < n; i++)
    {
        int x;
        ::cin >> x;
        if (x <= n)
        {
            a[x]++;
        }
    }

    int ans = 0;
    while (a[ans] != 0)
    {
        ans++;
    }

    cout << ans << "\n";

    return 0;
}