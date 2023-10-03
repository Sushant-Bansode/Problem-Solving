class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& v) {
        long long int ans = 0;
        unordered_map<string,int> mp;
        int g;
        for(auto &i: v){
            g = __gcd(i[0],i[1]);
            i[0] /= g,i[1] /= g;
            mp[to_string(i[0])+" "+to_string(i[1])]++;
        }
        for(auto &i: mp){
            ans += ((i.second)*1LL*(i.second-1))/2;
        }
        return ans;
    }
};