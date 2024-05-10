class Solution {
public:
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
         int i,n= nums1.size();
        int sum1 = 0, sum2 = 0;
        vector<int> v;
        for(i = 0; i < n; i++){
            sum1 += nums1[i];
            sum2 += nums2[i];
            v.push_back(nums1[i]-nums2[i]);
        }
        int ns=0,ps=0,mx=INT_MIN,mn=INT_MAX;
        for(i = 0; i < n; i++){
            ns += v[i];
            if(ns>0)ns = 0;
            if(ns<mn)mn = ns;
            
            ps += v[i];
            if(ps<0)ps = 0;
            if(ps>mx)mx = ps;
        }
        return max({sum1,sum2,sum1-mn,sum2+mx});
    }
};