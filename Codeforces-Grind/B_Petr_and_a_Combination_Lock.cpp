#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> angle(n);
    for (int i = 0; i < n; i++)
    {
        cin >> angle[i];
    }

    for (int mask = 0; mask < (1 << n); mask++) // 0 to 2^n - 1
    {
        int total = 0; // total angle
        for (int i = 0; i < n; ++i)
        {
            if (mask & (1 << i)) // the ith bit is 1 => clockwise rotation
                total += angle[i];
            else // anticlockwise rotation
                total -= angle[i];
        }

        if (total % 360 == 0)
        {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
