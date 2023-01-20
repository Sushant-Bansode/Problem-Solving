class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
    vector<int> less, great,ans;
     int pivot_count = 0;    
    for(auto x: nums){
        if(x > pivot){
            great.push_back(x);
        }else if(x < pivot){
            less.push_back(x);
        }else{
          pivot_count++;  
        }
    }
        
 for(auto x : less){ans.push_back(x);}
 while(pivot_count--){ans.push_back(pivot);}       
 for(auto x : great){ans.push_back(x);}
        
 return ans;       
    }
};