#include <iostream>
using namespace std;

void solution1()
{
    string num;
    cin >> num;
    int digit = num[0] - '0';

    if (digit % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }
}

void solution2()
{
    char num;
    cin >> num;
    int n = num - '0';
    if (n % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }
}
int main()
{
    solution2();
}