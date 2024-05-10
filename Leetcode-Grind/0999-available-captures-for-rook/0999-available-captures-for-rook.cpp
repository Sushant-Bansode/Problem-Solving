class Solution {
public:
    
// The function works this way, as it Eplores all the the postion travelling in dx or dy directions for each block, line where we can travel/.,     
  int cap(vector<vector<char>>& b, int x, int y, int i, int j){
 while (x >= 0 && x < b.size() && y >= 0 && y < b[x].size( ) && b[x][y] != 'B') {
    if (b[x][y] == 'p') {
        return 1;
    }
    x += i;
    y += j;
  }
  return 0;
}
  
int numRookCaptures(vector<vector<char>>& b) {

for(int i = 0; i < b.size(); ++i){
for(int j = 0; j < b[i].size(); ++j){
// Setting a Different a Function for Getting all available Postions for Elephant to See if it can Get the Hit, and For Each positions Updating the Count.  
  if(b[i][j] == 'R'){
   int Hunt = cap(b,i,j,0,1)+cap(b,i,j,0,-1)+cap(b,i,j,1,0)+cap(b,i,j,-1,0);            return Hunt; 
   } 
  }
}     
return 0;
 }
};

