#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string t = s;
    int cnt = 0;
    next_permutation(t.begin(), t.end());
    cnt++;
    while (t != s)
    {
        next_permutation(t.begin(), t.end());
        cnt++;
    }
    cout << cnt << endl;
    sort(t.begin(), t.end());
    do
    {
        cout << t << endl;
    } while (next_permutation(t.begin(), t.end()));
}