#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<string> arr;
    string ans = "/";
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == '/')
        {
            if (ans != "/")
            {
                arr.push_back(ans);
            }
            ans = "/";
        }
        else
        {
            ans += s[i];
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}