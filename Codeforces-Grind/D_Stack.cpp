#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    stack<int> st;
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            int x;
            cin >> x;
            st.push(x);
        }
        else if (s == "pop")
        {
            st.pop();
        }
        else if (s == "top")
        {
            cout << st.top() << endl;
        }
    }
    return 0;
}