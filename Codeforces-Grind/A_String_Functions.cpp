#include <bits/stdc++.h>
#define ll long long
#define loop(i, x) for (int i = 0; i < x; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int size, query, scope1, scope2;
    cin >> size >> query;
    string value, qu;
    cin >> value;
    while (query--)
    {
        cin >> qu;
        if (qu == "pop_back")
            value.pop_back();
        else if (qu == "front")
            cout << value.front() << "\n";
        else if (qu == "back")
            cout << value.back() << "\n";
        else if (qu == "sort")
        {
            cin >> scope1 >> scope2;
            sort(value.begin() + min(scope1, scope2) - 1, value.begin() + max(scope1, scope2));
        }
        else if (qu == "reverse")
        {
            cin >> scope1 >> scope2;
            reverse(value.begin() + min(scope1, scope2) - 1, value.begin() + max(scope1, scope2));
        }
        else if (qu == "print")
        {
            int pos;
            cin >> pos;
            cout << value[pos - 1] << "\n";
        }
        else if (qu == "substr")
        {
            cin >> scope1 >> scope2;
            cout << value.substr(min(scope1, scope2) - 1, abs(scope1 - scope2) + 1);
            cout << "\n";
        }
        else
        {
            char c;
            cin >> c;
            value.push_back(c);
        }
    }
}