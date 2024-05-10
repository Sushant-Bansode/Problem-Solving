#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> xmod;
        for (int i = 0; i < n - 1; ++i)
        {
            int x;
            cin >> x;
            xmod.push_back(x);
        }
        vector<int> ans;
        ans.push_back(7);
        for (int i = 0; i < n - 1; ++i)
        {
            ans.push_back(ans.back() + xmod[i]);
        }
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}