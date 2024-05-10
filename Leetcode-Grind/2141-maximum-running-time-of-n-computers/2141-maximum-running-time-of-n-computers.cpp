class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        sort(batteries.begin(), batteries.end());
        long long sum = 0;
        for(auto x: batteries){
            sum += x;
        }
        int k = 0, n1 = batteries.size();
        while (batteries[n1 - 1 - k] > sum / (n - k))
            sum -= batteries[n1 - 1 - k++];
        return sum / (n - k);
    }
};