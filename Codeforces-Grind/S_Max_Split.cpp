#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
void Solve()
{
    string s;
    cin >> s;
    ll l = 0, r = 0;
    string t = "";
    vector<string> vec;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
        {
            l++;
        }
        if (s[i] == 'R')
            l--;

        t += s[i];
        if (l == 0)
        {
            vec.push_back(t);
            t = "";
        }
    }
    cout << vec.size() << "\n";
    for (ll i = 0; i < vec.size(); i++)
        cout << vec[i] << "\n";
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        Solve();
    return 0;
}