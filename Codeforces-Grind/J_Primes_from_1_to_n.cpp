#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<bool> isPrime(n + 10, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= n + 10; ++i)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j <= n + 10; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; ++i)
    {
        if (isPrime[i] == true)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}