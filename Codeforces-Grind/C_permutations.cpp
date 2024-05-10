#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--)
    {
        string x;
        cin >> x;
        if (x == "next_permutation")
        {
            int y;
            cin >> y;
            while (y--)
            {
                next_permutation(s.begin(), s.end());
            }
            cout << s << '\n';
        }
        else
        {
            int y;
            cin >> y;
            while (y--)
            {
                prev_permutation(s.begin(), s.end());
            }
            cout << s << '\n';
        }
    }
}