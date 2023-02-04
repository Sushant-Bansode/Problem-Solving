class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> mp;
        for(auto x: arr){mp[x]++;}
       int count = 0;
     for(auto x : arr){
         if(mp[x] == 1){
             count++;
         }
        if(count == k){return x;}  
     }
  return "";       
    }
};