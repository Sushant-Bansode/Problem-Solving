#include <bits/stdc++.h>
using namespace std;

int main()
{
    float d, s1, s2, m, n, x, y;
    cin >> d >> s1 >> s2 >> m >> n >> x >> y;
    float t1 = (d * 1.0) / s1;
    float t2 = (d * 1.0) / s2;
    t1 += m * x;
    t2 += n * y;
    if (t1 == t2)
    {
        cout << "The perfect date" << endl;
    }
    else if (t1 < t2)
    {
        cout << "Darshan" << endl;
    }
    else
    {
        cout << "Crush" << endl;
    }
}