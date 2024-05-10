#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 1;
    char temp = s[0];
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] != temp)
        {
            cnt++;
            temp = s[i];
        }
    }
    cout << cnt << endl;
}