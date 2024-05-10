#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < k; ++i)
    {
        mp[s[i]]++;
    }
    int i = 0, j = k, cnt = mp.size();
    while (j < n)
    {
        mp[s[j]]++;
        j++;
        mp[s[i]]--;
        if (mp[s[i]] == 0)
        {
            mp.erase(s[i]);
        }
        i++;
        int t = mp.size();
        cnt = max(t, cnt);
    }
    cout << cnt << endl;
}