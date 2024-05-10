#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n][n - 1];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - 1; ++j)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;

    for (int i = 0; i < n; i++)
    {
        vector<int> a;
        unordered_set<int> st;
        for (int j = 0; j < n - 1; j++)
        {
            int m;
            cin >> m;
            a.push_back(m);
            st.insert(m);
        }
        int k = a.size();
        int c = 0;
        for (int l = 0; l < n; l++)
        {

            if (st.count(arr[l]))
            {
                arr[l] = a[c];
                c++;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
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