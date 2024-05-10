#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s1[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> s1[i];
    }
    bool flag = true;
    for (int i = 0; i < n / 2; ++i)
    {
        if (s1[i] != s1[n - i - 1])
        {
            cout << "NO" << endl;
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;
}