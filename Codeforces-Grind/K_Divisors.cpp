#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            ans.push_back(n / i);
        }
    }
    set<int> s;
    for (auto x : ans)
    {
        s.insert(x);
    }
    for (auto x : s)
    {
        cout << x << endl;
    }
}