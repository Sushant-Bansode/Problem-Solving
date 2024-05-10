#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long k = n & (n - 1);
    if (k == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}