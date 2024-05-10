#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length(), best = 0, curr = 1;
    for (int i = 1; i < n; i++)
    {
        while (s[i] == s[i - 1])
        {
            curr++;
            i++;
        }
        best = max(best, curr);
        curr = 1;
    }
    best = max(best, curr);
    cout << best;
    return 0;
}