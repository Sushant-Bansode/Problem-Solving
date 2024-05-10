#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    string s;
    while (q--)
    {
        cin >> s;
        if (s == "pop_back")
        {
            arr.pop_back();
        }
        else if (s == "push_back")
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        else if (s == "sort")
        {
            int l, r;
            cin >> l >> r;
            sort(arr.begin() + l - 1, arr.begin() + r);
        }
        else if (s == "reverse")
        {
            int l, r;
            cin >> l >> r;
            reverse(arr.begin() + l - 1, arr.begin() + r);
        }
        else if (s == "back")
        {
            cout << arr.back() << endl;
        }
        else if (s == "front")
        {
            cout << arr.front() << endl;
        }
        else if (s == "print")
        {
            int x;
            cin >> x;
            cout << arr[x - 1] << endl;
        }
    }
}