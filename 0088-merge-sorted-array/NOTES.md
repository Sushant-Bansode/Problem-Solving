class Solution {
public:
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
vector<int> ans = nums1;
int k = 0, i = 0, j = 0;
while( i < m && i < n){
if(nums1[i] < nums2[j])
ans[k++] = nums1[i++];
else if (nums2[j] < nums1[i])
ans[k++] = nums2[j++];
else{
ans[k++] = nums1[i];
ans[k++] = nums1[i];
i++; j++;
}
}
​
while(i < m)
ans[k++] = nums1[i++];
while(j < n)
ans[k++] = nums2[j++];
nums1 = ans;
}
};