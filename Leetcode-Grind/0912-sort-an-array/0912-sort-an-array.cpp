class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // Can Use Merge Sort Here.
        sort(nums.begin( ), nums.end( ));
        return nums;
    }
};