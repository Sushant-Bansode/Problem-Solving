#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char x;
    cin >> a;
    cin >> x;
    cin >> b;
    if (x == '+')
    {
        cout << a + b << endl;
    }
    else if (x == '-')
    {
        cout << a - b << endl;
    }
    else if (x == '*')
    {
        cout << a * b << endl;
    }
    else if (x == '/')
    {
        cout << a / b << endl;
    }
    return 0;
}