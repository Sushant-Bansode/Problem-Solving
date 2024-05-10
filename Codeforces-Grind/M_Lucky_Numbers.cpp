#include <bits/stdc++.h>
using namespace std;

bool luck(int &a)
{
    string s = to_string(a);
    int c4 = 0, c7 = 0;
    for (auto x : s)
    {
        if (x == '4')
        {
            c4++;
        }
        else if (x == '7')
        {
            c7++;
        }
    }
    return (c4 + c7 == s.length());
}

int main()
{
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b; ++i)
    {
        if (luck(i))
        {
            cout << i << " ";
            cnt++;
        }
    }
    if (cnt == 0)
    {
        cout << -1;
    }
    cout << endl;
}