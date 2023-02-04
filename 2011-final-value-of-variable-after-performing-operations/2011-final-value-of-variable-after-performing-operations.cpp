class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
    int count = 0;
        for(auto x: operations){
           if(x == "++X" || x == "X++"){
               count++;
           }else if(x == "--X" || x == "X--"){
               count--;
           }
       }
   return count;     
    }
};