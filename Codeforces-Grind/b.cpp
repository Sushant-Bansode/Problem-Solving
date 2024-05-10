#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int i = 0;
        int j = 0;
        while (j < m)
        {
            if (a[i] == b[j])
            {
                i++;
            }
            j++;
        }
        cout << i << endl;
    }
}