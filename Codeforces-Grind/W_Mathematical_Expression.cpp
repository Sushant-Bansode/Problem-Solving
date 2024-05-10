#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char a1, e1;
    cin >> a >> a1 >> b >> e1 >> c;
    if (a1 == '+')
    {
        if (a + b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a + b << endl;
        }
    }
    else if (a1 == '*')
    {
        if (a * b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a * b << endl;
        }
    }
    else if (a1 == '-')
    {
        if (a - b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a - b << endl;
        }
    }
    return 0;
}