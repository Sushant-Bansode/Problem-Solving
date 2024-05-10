#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> temp(1000);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        for (int j = 1; j <= 1000; ++j)
            temp.push_back(j);

        int count = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 1; j <= 1000; j++)
            {
                if (__gcd(arr[i], temp[j]) == 1)
                    count = i + j;
            }
        }
        cout << count << endl;
    }

    return 0;
}
