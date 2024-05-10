#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        reverse(s1.begin(), s1.end());
        int a = 0, b = n - 1;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (s2[a] == s1[i])
            {
                a++;
            }
            else if (s2[b] == s1[i])
            {
                b--;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "Case " << i << ": YES" << endl;
        else
            cout << "Case " << i << ": NO" << endl;
    }
}