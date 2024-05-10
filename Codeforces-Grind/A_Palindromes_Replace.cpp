#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    if (s == "?")
    {
        cout << "a" << endl;
        return 0;
    }

    for (int i = 0; i < n / 2; ++i)
    {
        if ((s[i] != '?' && s[n - i - 1] != '?') && s[i] != s[n - i - 1])
        {
            cout << -1 << endl;
            return 0;
        }
    }

    for (int i = 0; i < n / 2; ++i)
    {
        if (s[i] == '?' && s[n - i - 1] != '?')
        {
            s[i] = s[n - i - 1];
        }
        else if (s[i] != '?' && s[n - i - 1] == '?')
        {
            s[n - i - 1] = s[i];
        }
        else if (s[i] == '?' && s[n - i - 1] == '?')
        {
            s[i] = 'a';
            s[n - i - 1] = 'a';
        }
    }
    if (n & 1 && s[n / 2] == '?')
    {
        s[n / 2] = 'a';
    }
    cout << s << endl;
}