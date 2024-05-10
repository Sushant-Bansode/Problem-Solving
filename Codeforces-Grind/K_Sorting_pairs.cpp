#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string, int> x, pair<string, int> y)
{
    if (x.second == y.second)
        return (x.first < y.first);
    return (x.second > y.second);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<pair<string, int>> v;
    string s;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        cin >> x;
        v.push_back({s, x});
    }

    sort(v.begin(), v.end(), comp);

    for (auto i : v)
    {
        cout << i.first << " " << i.second << endl;
    }
}