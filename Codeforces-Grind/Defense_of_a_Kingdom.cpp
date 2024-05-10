#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        vector<int> rows;
        rows.push_back(0);
        vector<int> cols;
        cols.push_back(0);
        while (n--)
        {
            int x, y;
            cin >> x >> y;
            rows.push_back(x);
            cols.push_back(y);
        }
        rows.push_back(w + 1);
        cols.push_back(h + 1);
        sort(rows.begin(), rows.end());
        sort(cols.begin(), cols.end());
        int sz = rows.size();
        int row_mx = INT_MIN;
        for (int i = 1; i < sz; ++i)
        {
            int temp = abs(rows[i] - rows[i - 1] - 1);
            row_mx = max(row_mx, temp);
            // cout << row_mx << endl;
        }
        int col_mx = INT_MIN;
        for (int i = 1; i < sz; ++i)
        {
            int temp = abs(cols[i] - cols[i - 1] - 1);
            col_mx = max(col_mx, temp);
            // cout << col_mx << endl;
        }

        cout << (col_mx * row_mx) << endl;
    }
}