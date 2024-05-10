#include <bits/stdc++.h>
using namespace std;

int main()
{
    int R, C, x;
    cin >> R >> C;
    R = abs(R - 8);
    C = abs(C - 8);
    x = max(R, C);
    if (x % 2)
        cout << "black" << endl;
    else
        cout << "white" << endl;
}