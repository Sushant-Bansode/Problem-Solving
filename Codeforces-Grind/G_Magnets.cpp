#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> arr;
    string x;
    while (cin >> x)
    {
        arr.push_back(x);
    }

    int cnt = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] != arr[i + 1])
        {
            cnt++;
        }
    }
    cout << cnt + 1 << endl;
}