#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string &s)
{

    int n = s.length();
    string str = "";
    if (n == 0)
        return str;

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            str += s[i];
        }
    }
    str.push_back(s[n - 1]);
    return str;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (auto &x : s)
    {
        x = tolower(x);
    }
    s = removeDuplicates(s);
    if (s == "meow")
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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