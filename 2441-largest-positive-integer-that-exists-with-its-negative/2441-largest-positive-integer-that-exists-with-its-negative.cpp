class Solution {
public:
    int findMaxK(vector<int>& nums) {
        
          
        map<int,int> mp ;
        for( auto it : nums ) mp[it]++;
        
        int ans = INT_MIN ;
        bool gotAnsr = false ;
        
        for( int i=0 ; i<nums.size() ; i++ ){
            
            if( nums[i] > 0 ) {
                if( mp.find( 0-nums[i] ) != mp.end() ){
                    
                    ans = max( ans, nums[i] );
                    gotAnsr = true ;
                }
            }
        }
        
        if( gotAnsr ) return ans ;
        return -1 ;
    
    }
};