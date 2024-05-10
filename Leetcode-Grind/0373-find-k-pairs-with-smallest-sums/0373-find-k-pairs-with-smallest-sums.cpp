class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        auto compare=[&](const vector<int> &a, const vector<int> &b){
            return a[0]+a[1]>b[0]+b[1];
        };
        priority_queue<vector<int> , vector<vector<int>> , decltype(compare)> pq(compare);

        vector<vector<int>> ans;
        if(nums1.empty()||nums2.empty()||k==0)
            return ans;

    for(int i=0;i<nums1.size()&&i<k;i++)
        pq.push({nums1[i],nums2[0],0});
        
    while(k--&& !pq.empty()){
        vector<int> curr=pq.top();
        pq.pop();
        ans.push_back({curr[0],curr[1]});
        if(curr[2]==nums2.size()-1)
            continue;
        
        pq.push({curr[0],nums2[curr[2]+1],curr[2]+1});
    }
    return ans;
}
};