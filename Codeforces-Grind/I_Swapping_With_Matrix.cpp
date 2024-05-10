#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int arr[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[i][j];
        }
    }
    // Swap Rows Data.
    for (int i = 0; i < n; ++i)
    {
        swap(arr[x - 1][i], arr[y - 1][i]);
    }
    // Swap Cols Data.
    for (int i = 0; i < n; ++i)
    {
        swap(arr[i][x - 1], arr[i][y - 1]);
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}