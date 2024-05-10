#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<char>> arr(r, vector<char>(c, 0));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; ++j)
        {
            if (i % 2 == 0)
            {
                arr[i][j] = '#';
            }
            else if (i % 2 != 0)
            {
                if (i >= 1 && (i - 1) % 4 == 0)
                {
                    if (j == c - 1)
                    {
                        arr[i][j] = '#';
                    }
                    else
                    {
                        arr[i][j] = '.';
                    }
                }
                else if (i >= 3 && (i - 3) % 4 == 0)
                {
                    if (j == 0)
                    {
                        arr[i][j] = '#';
                    }
                    else
                    {
                        arr[i][j] = '.';
                    }
                }
            }
            cout << arr[i][j];
        }

        cout << endl;
    }
}
