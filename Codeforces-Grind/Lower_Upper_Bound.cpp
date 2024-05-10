#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    for (int i = 1; i <= 10; ++i)
    {
        v.push_back(i);
    }
    // 1 2 3 4 5 6 7 8 9 10
    // 0 1 2 3 4 5 6 7 8 9
    auto it = lower_bound(v.begin(), v.end(), 5);
    cout << *it << endl;
    cout << distance(v.begin(), it) << endl;
    cout << it - v.begin() << endl;

    auto it1 = upper_bound(v.begin(), v.end(), 5);
    cout << *it1 << endl;
    cout << distance(v.begin(), it1) << endl;
    cout << it1 - v.begin() << endl;
}