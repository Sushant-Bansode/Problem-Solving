#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin >> s1;
    int ct = 0;
    for (auto x : s1)
    {
        ct += int(x - '0');
    }
    cout << ct << endl;
}