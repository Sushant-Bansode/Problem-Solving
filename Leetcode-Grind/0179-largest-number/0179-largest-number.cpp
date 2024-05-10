class Solution {
public:
static bool comp(string& a, string& b)
{
    return a+b>b+a;
}    

string largestNumber(vector<int>& nums) {
   int n = nums.size();
    vector<string> v;
    for(int i:nums){
      v.push_back(to_string(i)); 
    }
    sort(v.begin(), v.end(), comp); 
    string ans="";
    for(auto x:v){
       ans += x; 
    }
 int i = 0;   
 while(ans[i] == '0'){
  if(ans.size( ) > 1){
      ans.erase(ans.begin( )); 
  }else{
      return ans;
  }  
 }
return ans;    
  }
};

   