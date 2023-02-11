class Solution {
public:
int minPartitions(string n) {
  int temp = INT_MIN;
    for(auto x: n){
      temp = max(temp, x-'0');  
    }
 return temp;   
    }
};