#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(m, 0);
    for (int i = 0; i < m; ++i)
    {
        cin >> v[i];
    }
    set<int> st;
    for (int i = 1; i <= n; ++i)
    {
        st.insert(i);
    }
    vector<int> ans(n + 1, -1);
    int index = n;
    int cnt = 0;
    for (int i = 0; i < m; ++i)
    {
        if (index < 1)
        {
            continue;
        }
        if (st.count(v[i]) == 0)
        {
            st.insert(v[i]);
            cnt++;
            ans[index] = cnt;
            index--;
        }
        else
        {
            cnt++;
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
