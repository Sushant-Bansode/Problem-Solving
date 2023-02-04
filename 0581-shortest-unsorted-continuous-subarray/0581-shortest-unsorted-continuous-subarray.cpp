class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
  vector<int> arr= nums;
        sort(arr.begin(), arr.end()); 
        int n= nums.size();
        int i=0, j= n-1;
        //from left to right, find first index where sorted array differs wrt nums
    while(i< n){
       if(arr[i]!= nums[i]){
            break;
    }
            i++;
}
        
        //from right to left, find first index where sorted array differs wrt nums
   while(j>=0){
      if(arr[j]!= nums[j]){
           break;
    }
          j--;
}
     if(i >= j){
       return 0;  
     }else {
         return j-i+1;
     }    
  }
};