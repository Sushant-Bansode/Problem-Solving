#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n1;
        cin >> n1;
        long long n = n1;
        long long ans = 0;
        while (n > 0)
        {
            if (n % 2 != 0)
            {
                ans++;
            }
            n = n / 2;
        }
        long long days = floor(log2(n1)) + 1;

        cout << ans << " " << days;
    }
}