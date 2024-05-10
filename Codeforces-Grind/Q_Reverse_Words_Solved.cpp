#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string ans;
    string req = "EGYPT";
    string rep = " ";
    int pos = 0;
    while (pos += rep.length())
    {
        pos = s.find(req, pos);
        if (pos == std::string::npos)
        {
            break;
        }

        s.erase(pos, req.length());
        s.insert(pos, rep);
    }
    cout << s << endl;
}