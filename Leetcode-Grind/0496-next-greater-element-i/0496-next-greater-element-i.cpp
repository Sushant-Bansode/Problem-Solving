class Solution {
public:
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
   vector<int> ans;
   map<int,int> mp1;

for(int i = 0; i< nums2.size( ); ++i){
    mp1[nums2[i]] = i;
}
    
for(auto x: nums1){
 int k = x;
 int j = 0;   
for(j = mp1[k]; j< nums2.size( ); ++j){
    if(nums2[j] > k){
      ans.push_back(nums2[j]);   
    break;
    }   
  }
if(j == nums2.size( )){
 ans.push_back(-1);   
}    
 }    
return ans;    
  }
};