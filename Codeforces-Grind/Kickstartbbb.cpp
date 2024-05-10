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
        vector<float> dred(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> red[i].first >> red[i].second;
            float temp = sqrt((red[i].first * red[i].first) + (red[i].second * red[i].second));
            if (temp <= max)
                dred.push_back(temp);
        }

        cin >> m;
        vector<pair<int, int>> yellow(m);
        vector<float> dyellow(m);
        for (int i = 0; i < m; ++i)
        {
            cin >> yellow[i].first >> yellow[i].second;
            float temp = sqrt((yellow[i].first * yellow[i].first) + (yellow[i].second * yellow[i].second));
            if (temp <= max)
                dyellow.push_back(temp);
        }

        long long ay = 0;
        long long ar = 0;

        float mred = *min_element(dred.begin(), dred.end());
        float myellow = *min_element(dyellow.begin(), dyellow.end());

        for (int i = 0; i < dred.size(); i++)
        {
            int stop = true;
            for (int j = 0; j < dyellow.size(); j++)
            {
                if (dyellow[j] < dred[i])
                {
                    stop = false;
                    break;
                }
            }
            if (stop)
                ar++;
        }
        for (int i = 0; i < dyellow.size(); i++)
        {
            int stop = true;
            for (int j = 0; j < dred.size(); j++)
            {
                if (dred[j] < dyellow[i])
                {
                    stop = false;
                    break;
                }
            }
            if (stop)
                ay++;
        }
        /*        if (myellow < mred && myellow <= max)
                {
                    ay++;
                }
                else if (mred < myellow && mred <= max)
                {
                    ar++;
                }
        */
        cout << "Case #" << i << ": " << ar << " " << ay << endl;
    }
}