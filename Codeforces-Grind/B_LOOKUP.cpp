#include <bits/stdc++.h>
using namespace std;

int isSubstring(string s1, string s2)
{
    // using find method to check if s1 is
    // a substring of s2
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}

int main()
{
    string s, t;
    cin >> s >> t;

    int k = isSubstring(t, s);
    if (k != -1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}