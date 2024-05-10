#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n + 1];
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 1;
    for (int i = 3; i < n + 1; ++i)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    cout << arr[n] << endl;
}