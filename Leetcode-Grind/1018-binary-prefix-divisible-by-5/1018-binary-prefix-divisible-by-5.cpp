class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        // Okay the Trick here is IF We, left shift the existing 
        //digits, the number gets multiplied by 2 and in units if 0 is added then it is number*2 + 0 else number*2 + 1.
    vector<bool> ans;   
    long long no = nums[0];
      if(no % 5 == 0){ans.push_back(1);}
      else{ans.push_back(0);}
        
    for(int i = 1 ; i< nums.size( ); ++i){
     if(nums[i] == 0){
       no *= 2;  
     }else if(nums[i] == 1){
       no *= 2;  
       no += 1;  
     }
    if(no % 5 == 0){ans.push_back(1);}
     else{ans.push_back(0);}     
    no = no % 5;
    }
return ans;        
    }
};