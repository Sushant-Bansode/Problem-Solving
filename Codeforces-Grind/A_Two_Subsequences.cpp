#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char min = s[0];
        int index = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] < min)
            {
                min = s[i];
                index = i;
            }
        }
        string b;
        if (index == s.size() - 1)
        {
            b = s.substr(0, index);
        }
        else
        {
            b = s.substr(0, index) + s.substr(index + 1);
        }
        cout << min << " " << b << "\n";
    }
    return 0;
}