class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    map<int,int> m1, m2;
    vector<int> ans;    
    for(auto x : nums1) 
      m1[x]++;
    
    for(auto x : nums2) 
      m2[x]++;     
        
    for (auto it = m1.begin(); it != m1.end(); ++it) {
        if (m2.find(it->first) != m2.end()) {
        int minit = min(m1[it->first],m2[it->first]);
            while(minit--){
                ans.push_back(it->first);
            }
        } 
    }
        
    return ans;     
    }
};