
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        string s2 = "";
        cin >> s1;
        for (int i = 0; i < 100; ++i)
        {
            s2 += "Yes";
        }

        if (s2.find(s1) != string::npos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
