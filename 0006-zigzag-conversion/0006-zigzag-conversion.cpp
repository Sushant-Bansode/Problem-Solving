class Solution {
public:
string convert(string s, int numRows) {

if(numRows==1){
  return s;  
} 
  bool down=true;
  string arr[numRows];
  int row=0;
 for(int i=0; i<s.size(); i++) {
  arr[row].push_back(s[i]);
// Setting the Down, Boolean Flag for, Deciding the Row No. Where to Push the The Current Character.  
  if(row == numRows-1){
    down = false;  
  } 
  else if(row==0){
    down = true;
  }
  // Updating the Row no, To Traverse In Zig-Zag Order.
  if(down){
    row++;
  }
  else{
    row--;
  }
}
  string res="";
 for(int i=0; i<numRows; i++) {
    res += arr[i];
}
 return res;        
}
};