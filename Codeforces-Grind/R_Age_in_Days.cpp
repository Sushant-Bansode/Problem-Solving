#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int yr = a / 365;
    int mon = (a - yr * 365) / 30;
    int day = (a - yr * 365 - mon * 30);

    cout << yr << " years" << endl
         << mon << " months" << endl
         << day << " days" << endl;
}