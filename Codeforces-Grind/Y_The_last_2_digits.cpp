#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    int m = ((a % 100 * b % 100) * (c % 100 * d % 100) % 100);
    if (m >= 0 && m < 9)
    {
        cout << "0" << m << endl;
    }
    else
    {
        cout << m << endl;
    }
    return 0;
}