#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void getPairsMerge(long long arr[], long long l, long long r, long long mid, vector<pair<long long, long long>> &p)
{
    long long b[l + r + 1], i = l, k = l, j = mid + 1;
    while (i <= mid && j <= r)
    {
        if (arr[i] > arr[j])
        {
            b[k] = arr[j];
            p.push_back({arr[i], arr[j]});
            p.push_back({arr[j], arr[i]});
            p.push_back({arr[j], arr[j]});
            k++;
            j++;
        }
        else
        {
            p.push_back({arr[i], arr[j]});
            p.push_back({arr[j], arr[i]});
            p.push_back({arr[i], arr[i]});
            b[k] = arr[i];
            i++;
            k++;
        }
    }

    while (i <= mid)
    {
        b[k] = arr[i];
        p.push_back({arr[i], arr[i]});
        i++;
        k++;
    }
    while (j <= r)
    {
        b[k] = arr[j];
        p.push_back({arr[j], arr[j]});
        j++;
        k++;
    }

    for (long long x = l; x <= r; x++)
    {
        arr[x] = b[x];
    }
}

void getAllPairs(long long arr[], long long l, long long r, vector<pair<long long, long long>> &p)
{
    if (l < r)
    {
        long long mid = (l + r) / 2;
        getAllPairs(arr, l, mid, p);
        getAllPairs(arr, mid + 1, r, p);
        getPairsMerge(arr, l, r, mid, p);
    }
}

void solve()
{
    long long n;
    cin >> n;
    long long arr[n];
    long long x = 0;
    for (long long i = 0; i < n; ++i)
    {
        cin >> arr[i];
        x ^= arr[i];
    }
    if (x == 0)
    {
        cout << "YES" << endl;
        return;
    }
    long long result;
    vector<pair<long long, long long>> p;
    getAllPairs(arr, 0, n - 1, p);
    for (auto it : p)
    {
        if (gcd(it.first, it.second) > 1 && it.first != it.second)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}