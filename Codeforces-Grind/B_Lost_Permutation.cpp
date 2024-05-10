#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, ls;
        cin >> m >> ls;
        int arr[m];
        int fsum = 0;
        for (int i = 0; i < m; ++i)
        {
            cin >> arr[i];
            fsum += arr[i];
        }
        sort(arr, arr + m);
        int k = fsum + ls;
        vector<int> sum;
        for (int i = 1; i <= 100; i++)
        {
            int k = i * (i + 1) / 2;
            sum.push_back(k);
        }

        // auto iterator it;
        auto it = find(sum.begin(), sum.end(), k);
        if (k == arr[m - 1] * (arr[m - 1] + 1) / 2 || k == ls * (ls + 1) / 2)
        {
            cout << "YES" << endl;
        }
        else if (it != sum.end())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
