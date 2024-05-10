class Solution {
public:
   
    bool isMonotonic(vector<int>& nums) {
       
        int ci = 0, cd = 0;
      vector<int>v1,v2;
        v1 = nums;
        v2 = nums;
        sort(v1.begin( ),v1.end());
        sort(v2.begin( ), v2.end( ),greater<int>());
        if(nums == v1 || nums == v2)
        return true;
        else
        return false;     
    }
};