class Solution {
public:
    static bool sortcol(vector<int> &a , vector<int> &b)
    {
        return (a[1] < b[1]);
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin() , points.end(), sortcol);
        int i = 0 , cnt = 0 , n = points.size();
        while( i < n )
        {
            ++cnt;
            int end = points[i][1];
            ++i;
            while( i < n && points[i][0] <=end )
            {
                ++i;
            }
        }
        return cnt;

    }
};