#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        float rs, rh;
        cin >> rs >> rh;
        float max = rs + rh;
        int n, m;

        cin >> n;
        vector<pair<int, int>> red(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> red[i].first >> red[i].second;
        }
        cin >> m;
        vector<pair<int, int>> yellow(m);
        for (int i = 0; i < m; ++i)
        {
            cin >> yellow[i].first >> yellow[i].second;
        }

        vector<float> dred(n);
        vector<float> dyellow(m);
        for (int i = 0; i < n; ++i)
        {
            float temp = sqrt((red[i].first * red[i].first) + (red[i].second * red[i].second));
            dred.push_back(temp);
        }
        for (int i = 0; i < m; ++i)
        {
            float temp = sqrt((yellow[i].first * yellow[i].first) + (yellow[i].second * yellow[i].second));
            dyellow.push_back(temp);
        }
        long long ay = 0;
        long long ar = 0;

        float mred = *min_element(dred.begin(), dred.end());
        float myellow = *min_element(dyellow.begin(), dyellow.end());
        if (myellow < mred && myellow <= max)
        {
            ay++;
        }
        else if (mred < myellow && mred <= max)
        {
            ar++;
        }

        cout << "Case #" << i << ": " << ar << " " << ay << endl;
    }
}