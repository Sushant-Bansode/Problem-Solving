#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    set<int> st;
    for (auto x : arr)
    {
        st.insert(x);
    }
    vector<int> ans;
    for (auto x : st)
    {
        ans.push_back(x);
    }
    n = ans.size();
    while (q--)
    {
        int k;
        cin >> k;
        auto it1 = lower_bound(ans.begin(), ans.end(), k);
        int less = it1 - ans.begin();
        int big = n - less;
        if (binary_search(ans.begin(), ans.end(), k))
        {
            big--;
        }
        cout << less << " " << big << endl;
    }
}