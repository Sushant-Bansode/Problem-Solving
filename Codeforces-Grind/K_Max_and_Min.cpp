#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(c, min(a, b)) << " ";
    cout << max(a, max(b, c)) << endl;
}