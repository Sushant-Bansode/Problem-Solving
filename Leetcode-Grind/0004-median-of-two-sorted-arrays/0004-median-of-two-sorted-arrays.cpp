class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      int n = nums1.size( );  
      int m = nums2.size( );
      int i = 0;
      int j = 0;
      int s = m + n;
    vector<int>temp(n+m);
        int k = 0;
    while((i<n && j < m)&& k<s){
     if(nums1[i] <= nums2[j]){
         temp[k++] = nums1[i++];
     }else if(nums1[i] > nums2[j]){
         temp[k++] = nums2[j++];
     }
}
 while(i<n && k<s){
     temp[k++] = nums1[i++];
 }       
 while(j<m && k<s){
     temp[k++] = nums2[j++];
 }
 double med = 0;       
if(s%2 == 0){
    med = (temp[s/2]+temp[(s-1)/2])/2.0;
    return med;
}else{
    med = temp[s/2];
    return med;
} 
   
  }     
};