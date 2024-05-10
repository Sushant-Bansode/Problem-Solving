class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
    vector<int>even, odd, ans;
        
      for(int i = 0; i< nums.size( ); ++i){
        if(i&1){
            odd.push_back(nums[i]);
        }else{
            even.push_back(nums[i]);
        }  
      }
       sort(even.begin( ), even.end( ));
       sort(odd.rbegin( ), odd.rend( ));
       int index = 0;
   while(ans.size( ) != nums.size( )){
       if(index < even.size( ))
       ans.push_back(even[index]);
       if(index < odd.size( ))
       ans.push_back(odd[index]);
   index++;
   } 
  return ans;  
    }
};