class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){return 0;}
        unordered_set<int>s;
       for(auto x: nums){s.insert(x);}
        vector<int> arr;
       for(auto x: s){arr.push_back(x);} 
        sort(arr.begin( ), arr.end( ));
     int res = 1, curr = 1;
        for(int i = 1; i< arr.size( ); ++i){
        if(arr[i] == arr[i-1] + 1){
            curr++;
        }else{
            res = max(res,curr);
        curr = 1;
        }   
    }
   // IN CASE IF ALL THE ELEMENTS ARE CONSECUTIVE AND NOT EVEN TOUCHED THE ELSE STATEMENT EVEN ONCE.     
   res = max(res,curr);     
 return res;   
    }
};