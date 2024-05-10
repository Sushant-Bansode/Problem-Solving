#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c1, c2;
    long long ans;
    if (a % 2 == 0 && b % 2 == 0)
    {
        ans = 0;
    }
    else if (a % 2 == 0 && b % 2 != 0)
    {
        ans = 1;
    }
    else if (b % 2 == 0 && a % 2 != 0)
    {
        ans = 1;
    }
    else if (a & 1 && a & (1 << 1) != 0)
    {
        ans = 1;
    }
    else if (a & 1 && a & (1 << 1) != 0)
    {
        ans = 1;
    }
}