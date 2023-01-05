class Solution {
public:
  bool check_letter(string &s){
        for(auto it:s){
            if(it>=97 && it<=122)
                return true;
        }
        return false;
}
    
int maximumValue(vector<string>& strs){
int ans = 0;
for(auto it:strs){
if(check_letter(it)){
ans = max(ans,(int)it.size());
}
else{
ans = max(ans, stoi(it));
}
  }
return ans;
}
};