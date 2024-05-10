#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int start = 0, end = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == ' ')
        {
            end = i - 1;
            reverse(s.begin() + start, s.begin() + end + 1);
            start = i + 1;
        }

        if (i == s.length() - 1)
        {
            reverse(s.begin() + start, s.end());
        }
    }
    cout << s << endl;
}