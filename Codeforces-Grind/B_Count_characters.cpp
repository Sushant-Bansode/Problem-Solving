#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto x : s)
    {
        mp[x]++;
    }
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
}