/*  for(auto x : nums) x += 1;
int i = 0;
for(int i = 0; i< nums.size( ); ++i){
if(i > 0 && nums[i]-nums[i-1] > 1)
return i;
}
return i; */
class Solution {
public:
int missingNumber(vector<int>& nums) {
vector<int>v;
for(int i=0;i<=nums.size();i++) v.push_back(i);
int s = accumulate(nums.begin(),nums.end(),0);
int s1 = accumulate(v.begin(),v.end(),0);
return s1-s;
}
};