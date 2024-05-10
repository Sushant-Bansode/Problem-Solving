#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ev = 0, od = 0, pos = 0, neg = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            ev++;
        }
        if (arr[i] & 1)
        {
            od++;
        }
        if (arr[i] > 0)
        {
            pos++;
        }
        if (arr[i] < 0)
        {
            neg++;
        }
    }
    cout << "Even: " << ev << endl
         << "Odd: " << od << endl
         << "Positive: " << pos << endl
         << "Negative: " << neg << endl;
}