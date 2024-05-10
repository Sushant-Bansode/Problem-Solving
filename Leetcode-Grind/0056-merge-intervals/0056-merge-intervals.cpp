class Solution {
public:
    
static bool myComp(vector<int>& a, vector<int>& b){
        if(a[0] != b[0]){
            return (a[0] < b[0]);
        }else{
            return (a[1] < b[1]);
        }
    }
    
vector<vector<int>> merge(vector<vector<int>>& intervals){
     int n = intervals.size( );
     vector<vector<int>>ans;
sort(intervals.begin( ), intervals.end( ), myComp);
int res = 0;
    
    for(int i = 1; i< n; ++i){
    if(intervals[res][1] >= intervals[i][0]){
     intervals[res][1] = max(intervals[res][1], intervals[i][1]);     
     intervals[res][0] = min(intervals[res][0], intervals[i][0]); 
   }else{
    res++;
    intervals[res][0] = intervals[i][0];
    intervals[res][1] = intervals[i][1];        
   }
}
    
for(int i =0 ; i<= res; ++i){
 vector<int> temp;
 temp.push_back(intervals[i][0]);
 temp.push_back(intervals[i][1]);   
ans.push_back(temp);
}   
    
 return ans;
  
   }
};