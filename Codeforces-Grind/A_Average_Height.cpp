#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        vector<int> a1;
        vector<int> a2;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] % 2 == 0)
            {
                a1.push_back(arr[i]);
            }
            else
            {
                a2.push_back(arr[i]);
            }
        }
        for (auto &x : a2)
        {
            cout << x << " ";
        }
        for (auto &x : a1)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}