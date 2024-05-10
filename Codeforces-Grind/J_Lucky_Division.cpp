#include <bits/stdc++.h>
using namespace std;

bool ans(int b)
{
    string a = to_string(b);
    int x = 0, y = 0;
    for (int i = 0; i < a.length(); ++i)
    {
        if (a[i] - '0' == 4)
        {
            x++;
        }
        else if (a[i] - '0' == 7)
        {
            y++;
        }
    }
    if (x + y == a.length())
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> div;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
        }
    }
    for (auto x : div)
    {
        if (ans(x))
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}