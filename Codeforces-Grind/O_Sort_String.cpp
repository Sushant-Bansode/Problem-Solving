#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> mp;
    long long n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        char x;
        cin >> x;
        mp[x]++;
    }
    for (auto x : mp)
    {
        while (x.second--)
        {
            cout << x.first;
        }
    }
    cout << endl;
}