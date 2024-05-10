#include <bits/stdc++.h>
using namespace std;

bool isInteger(double N)
{
    int X = N;
    double temp2 = N - X;
    if (temp2 > 0)
    {
        return false;
    }
    return true;
}

int main()
{
    double N;
    cin >> N;
    int X = N;
    double temp2 = N - X;
    if (isInteger(N))
    {
        cout << "int " << N << endl;
    }
    else
    {
        cout << "float " << X << " " << temp2 << endl;
    }

    return 0;
}
