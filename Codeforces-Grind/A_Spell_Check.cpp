#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string name = "Timur";
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n == 5)
        {
            if (is_permutation(name.begin(), name.end(), s.begin()))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
