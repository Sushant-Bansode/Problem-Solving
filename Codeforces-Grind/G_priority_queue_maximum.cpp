#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> q;
    priority_queue<int> pq;
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        else if (s == "top")
        {
            cout << pq.top() << endl;
        }
        else if (s == "pop")
        {
            pq.pop();
        }
    }
}