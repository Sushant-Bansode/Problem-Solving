#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; ++i)
    {
        int p, q;
        cin >> p >> q;
        vec.push_back({p, q});
    }
    int cnt = 0;
    for (auto x : vec)
    {
        if ((x.second - x.first) >= 2)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}