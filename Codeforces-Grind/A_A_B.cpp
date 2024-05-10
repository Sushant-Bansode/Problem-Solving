#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    cout << (s[0] - '0') + (s[2] - '0') << endl;
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