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
        vector<int> arr(2 * n, 0);
        for (int i = 0; i < 2 * n; ++i)
        {
            cin >> arr[i];
        }
        int eve = 0, odd = 0;
        for (int i = 0; i < 2 * n; ++i)
        {
            if (arr[i] % 2 == 0)
            {
                eve++;
            }
            else
            {
                odd++;
            }
        }
        if (odd == eve)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}