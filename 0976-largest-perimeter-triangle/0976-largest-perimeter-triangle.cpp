class Solution {
public:
    
static bool comp(int a, int b){
    return (a > b);
}    
int largestPerimeter(vector<int>& nums) {
       sort(nums.begin( ), nums.end( ), comp);
  
  //any tringle sum of smaller two side greater than 3rd side...so we check that condition, a+b>c where a<b<c   
    for(int i= 0;i < nums.size( ) -2;i++){
        //check the triangle valid condition
        if(nums[i+1]+nums[i+2]>nums[i]){
            return(nums[i]+nums[i+1]+nums[i+2]); //perimeter
        }
    }
return 0;            
    }
};