class Solution {
public:
    bool rotateString(string s, string goal) {
       if(s.length() != goal.length()){
           return false;
       }
       else{ 
      string temp = s + s;
       if (temp.find(goal) != string::npos){
           return true;
       }
       else{
           return false;
       } 
    }
  }     
};