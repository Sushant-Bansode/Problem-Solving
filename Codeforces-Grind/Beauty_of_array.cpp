#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    long long sum = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        long long first = min(arr[i], arr[i + 1]);
        long long second = max(arr[i], arr[i + 1]);
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < first)
            {
                second = first;
                first = arr[j];
            }
            else if (arr[j] < second && arr[j] != first)
                second = arr[j];

            sum += (first ^ second);
        }
    }
    cout << sum << endl;
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