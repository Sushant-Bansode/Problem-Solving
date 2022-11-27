class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       
    vector<vector<int>> ans(2);
    set<int> n1;
    set<int> n2;
        
   for(auto x: nums1)     
   n1.insert(x);
        
   for(auto x: nums2)     
   n2.insert(x);     
        
   // Checking if the Elements in SET1 but not in SET2 If not then Pushback in the ans[0] 
    for (auto it = n1.begin( ); it != n1.end(); it++){
   // finding position of *it in set2
    auto pos = n2.find(*it);
   // push the element if it is present in set
    if(pos != n2.end()){
        continue;
    }
    else{
     ans[0].push_back(*it);   
    }
    }
       
    // Checking if the Elements in SET2 but not in SET1 If not then Pushback in the ans[1] 
    for (auto it = n2.begin( ); it != n2.end(); it++){
   // finding position of *it in set1
    auto pos = n1.find(*it);
   // push the element if it is present in set
    if(pos != n1.end()){
        continue;
    }
    else{
     ans[1].push_back(*it);   
    }
    }
    
   return ans;     
        
    }
};