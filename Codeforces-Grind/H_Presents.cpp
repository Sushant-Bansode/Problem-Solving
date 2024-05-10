#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    vector<pair<int, int>> vec;
    for (int i = 0; i < n; ++i)
    {
        vec.push_back({arr[i], i + 1});
    }
    sort(vec.begin(), vec.end());
    for (auto x : vec)
    {
        cout << x.second << " ";
    }
    cout << endl;
}