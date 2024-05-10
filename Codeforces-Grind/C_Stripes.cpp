#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> v(8);
        for (int i = 0; i < 8; ++i)
            cin >> v[i];

        int cr = 0;
        bool flagr = false;
        for (int i = 0; i < 8; ++i)
        {
            cr = 0;
            for (int j = 0; j < 8; ++j)
            {
                if (v[i][j] == 'R')
                    cr++;

                if (cr == 8)
                    flagr = true;
            }
        }

        int cb = 0;
        bool flagb = false;
        for (int i = 0; i < 8; ++i)
        {
            cb = 0;
            for (int j = 0; j < 8; ++j)
            {
                if (v[j][i] == 'B')
                    cb++;

                if (cb == 8)
                    flagb = true;
            }
        }

        if (flagb == true)
            cout << 'B' << endl;
        else
            cout << 'R' << endl;
    }
    return 0;
}
