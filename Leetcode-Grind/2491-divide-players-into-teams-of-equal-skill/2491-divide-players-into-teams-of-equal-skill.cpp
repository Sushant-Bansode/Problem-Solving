class Solution {
public:
long long dividePlayers(vector<int>& nums){
      int n = nums.size( );
     sort(nums.begin( ), nums.end( ));
     int i = 0,j = n-1;
     int ans  = 0;
    long long sum = 0;
    for(auto x: nums){sum += x;}
    int s = n/2;
    int k = sum/s;
    long long chem = 0;
    while(i < j){
        int sum = nums[i] + nums[j];
        if(sum == k){
        chem += nums[i]*nums[j];
          ans++;
            i++;
            j--;
        }else if(sum  > k ){
           j--;
        }else{
            i++;
        }
    }
    if(ans == n/2){
        return chem;
    }      
   return -1; 
    }
};