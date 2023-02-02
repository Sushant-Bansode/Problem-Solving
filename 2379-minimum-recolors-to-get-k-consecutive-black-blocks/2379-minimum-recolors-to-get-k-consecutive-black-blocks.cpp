class Solution {
public:
    int minimumRecolors(string blocks, int k) {
    int start = 0;
// Initialising with No of Bs in the 1st Window of size K.
for(int i =0; i<k ;i++){
  if(blocks[i]=='B')
    start++;
}
// Typical Sliding Window For the Sake of the maximum of Bs in a Window of Size K.        
// window variable
int temp = start;
for(int i =0, j = k; j<blocks.size(); i++, j++ ){
 // i it is the Starting index of the sliding window.
 // j it is the ending index of the sliding window.
 // if the Previous 1st starting index of the window was 'B' , then do temp-- or Else if the New upcoming to be added end index is, 'B' then add in temp.  
            if(blocks[i]=='B'){
                temp--;  
            }
            if(blocks[j]=='B'){
                temp++;   
            }
// Simultaneously Keep Calculating the maximum count of the B as Every Window Proceeds via adding the next and subtracting the lasr one.            
            start = max(start,temp);
    }    
        return k-start;            
    }
};