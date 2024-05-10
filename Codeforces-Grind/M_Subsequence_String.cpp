#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string req = "hello";
    int i = 0;
    int j = 0;
    for (j = 0; j < s.length(); j++)
    {
        if (req[i] == s[j])
        {
            i++;
        }
    }

    if (i == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}