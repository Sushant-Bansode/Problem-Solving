#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;
        long long cab = n / 3;
        if (y < cab)
        {
            cout << n * y << endl;
        }
        else if (n % 3 == 0 && cab < y)
        {
            cout << cab * x << endl;
        }
        else if (n % 3 == 1 && cab < y)
        {
            cout << cab * x + min(y, cab * 1);
        }
        else if (n % 3 == 2 && cab < y)
        {
            cout << cab * x + min(cab * 2, min(y + cab * 1, y * 2));
        }
    }
}