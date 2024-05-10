#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
        vector<int> a1;
        vector<int> a2;
        int i = 1;
        int k = n / 2;
        while (k--)
        {
            a1.push_back(i);
            a2.push_back(n - i);
            i++;
        }
        sort(a1.begin(), a1.end());
        sort(a2.begin(), a2.end());
        cout << a1.size() << endl;
        for (auto x : a1)
        {
            cout << x << " ";
        }
        cout << endl;
        cout << a2.size() << endl;
        for (auto x : a2)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}