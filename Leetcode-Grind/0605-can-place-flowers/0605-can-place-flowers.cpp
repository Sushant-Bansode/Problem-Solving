class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    // Counting Nos of Replaceable Ones instead of Zeroes, 3 Zeroes in one line Needed and 2 Edges Cases. 
    int count = 0;
     int n1 = flowerbed.size( );   
if(n1 == 1){
   if(flowerbed[0] == 0 && n == 1)
   return true;
   else if(flowerbed[0] == 1 && n == 0)
   return true;
   else if(flowerbed[0] == 0 && n == 0)
   return true;
   else if(flowerbed[0] == 1 && n == 1)
   return false;    
}
else{        
// Edge Case -1        
if(flowerbed[0] == 0 && flowerbed[1] == 0){
     flowerbed[0] = 1;     
     count++;
}   
  // Edge Case -2
if(flowerbed[n1-1] == 0 && flowerbed[n1-2] == 0){
    flowerbed[n1-1] = 1;
    count++;   
}     
for(int i = 0; i< n1 - 1; ++i){
if(i >0 && (flowerbed[i] == 0 && flowerbed[i+1] == 0 && flowerbed[i-1] == 0)){
    flowerbed[i] = 1;
    count++;
 }    
}
 }
return (count>= n);        
  }
};