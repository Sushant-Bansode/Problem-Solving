#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string pi = "314159265358979323846264338327";

    string s;
    cin >> s;
    int i = 0;
    int count = 0;
    while (s[i] == pi[i] && i < 30)
    {
        count++;
        i++;
    }
    cout << count << endl;
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