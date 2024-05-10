#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string ans;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == 'E' && s[i + 1] == 'G' && s[i + 2] == 'Y' && s[i + 3] == 'P' && s[i + 4] == 'T')
        {
            ans += " ";
            i = i + 4;
        }
        else
        {
            ans += s[i];
        }
    }
    cout << ans << endl;
}