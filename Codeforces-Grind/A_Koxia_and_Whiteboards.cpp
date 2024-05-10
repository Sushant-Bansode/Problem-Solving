#include "bits/stdc++.h"
using namespace std;

void solve()
{
    long long n, m;
    cin >> n >> m;
    long long arr1[n];
    long long arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    // MIN HEAP.(Priority Queue My Last Option.)
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        pq.pop();
        pq.push(arr2[i]);
    }
    long long sum = 0;
    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();
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

    return 0;
}