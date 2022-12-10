class Solution {
public:
     bool canBeEqual(vector<int>& target, vector<int>& arr) {
      
        map<int,int>mp;
        for(int i = 0 ; i < arr.size() ; i++){
            mp[arr[i]]++;
            mp[target[i]]--;
        }
         
        for(auto x : mp){ 
            if(x.second) 
        return false;    }

        return true;
        
    }
};