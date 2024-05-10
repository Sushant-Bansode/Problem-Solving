#include <bits/stdc++.h>
using namespace std;

int findLowestStartingStair(vector<int> jumps)
{

    int minValue = 0;
    int sum = 0;
    for (auto n : jumps)
    {
        sum += n;
        minValue = min(minValue, sum);
    }
    int startValue = 1 - minValue;
    return startValue;
    /*
        int count = INT_MAX;
        int result = INT_MAX;
        int n = jumps.size();
        for (int i = 0; i < n; i++)
        {
            if (jumps[i] > 0)
                count = 0;
            else
            {
                count += jumps[i];
                result = min(result, count);
            }
        }

        for (int i = 0; i < n; ++i)
        {
            if (jumps[i] == result)
            {
                return abs(result) + 1;
            }
        }
        return abs(result);
    */
}

int main()
{
    vector<int> v{5, -5, 4, -2, 3, 1};
    cout << findLowestStartingStair(v) << endl;
}