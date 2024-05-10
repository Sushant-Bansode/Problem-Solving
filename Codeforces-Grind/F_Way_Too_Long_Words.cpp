#include <bits/stdc++.h>
using namespace std;
void test_cases()
{
    string s1;
    cin >> s1;
    if (s1.length() > 10)
    {
        cout << s1[0] << s1.length() - 2 << s1[s1.length() - 1] << endl;
    }
    else
    {
        cout << s1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        test_cases();
    }
}