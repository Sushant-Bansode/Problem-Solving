#include <bits/stdc++.h>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long sum = n * (n + 1) / 2;
    if (sum % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        long long target = sum / 2;
        set<long long> s1, s2;
        long long t = n;
        for (int i = 1; i <= n; ++i)
        {
            s1.insert(i);
        }

        while (s1.count(target) == 0)
        {
            target = target - t;
            s2.insert(t);
            s1.erase(t);
            t--;
        }
        s1.erase(target);
        s2.insert(target);
        cout << s1.size() << endl;
        for (auto x : s1)
        {
            cout << x << " ";
        }
        cout << endl;
        cout << s2.size() << endl;
        for (auto x : s2)
        {
            cout << x << " ";
        }
    }
}