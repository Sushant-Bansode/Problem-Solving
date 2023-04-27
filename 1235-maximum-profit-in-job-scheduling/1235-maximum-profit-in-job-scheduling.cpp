class Solution {
    static bool cc(const int &a, const vector<int> &b) {
        return a < b[0];
    }
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<vector<int> > lazy;
        for(int i = 0; i < startTime.size(); i++) {
            lazy.push_back({endTime[i], startTime[i], profit[i]});
        }
        sort(lazy.begin(), lazy.end());
        vector<vector<int> > ans;
        ans.push_back(lazy[0]);
        int v, ind;
        for(int i = 1; i < startTime.size(); i++) {
            ind = upper_bound(ans.begin(), ans.end(), lazy[i][1], cc) - ans.begin();
            ind--;
            if(ind >= 0) {
                v = ans[ind][2] + lazy[i][2];
            }
            else v = lazy[i][2];
            if(v > ans[ans.size() - 1][2]){
                if(ans[ans.size() - 1][0] == lazy[i][0]){
                    ans.pop_back();
                }
                ans.push_back(lazy[i]);
                ans[ans.size() - 1][2] = v;
            }
        }
        return ans[ans.size() - 1][2];
    }
};