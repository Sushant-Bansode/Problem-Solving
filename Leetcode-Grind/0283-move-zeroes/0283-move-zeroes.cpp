class Solution {
public:
    void moveZeroes(vector<int>& arr) {
      int count=0; int n = arr.size( );
    for(int i=0; i<n;i++){
        if(arr[i] != 0){
            arr[count] = arr[i];  //count no of non zeros and place them from 0
            count++;
        }
    }
    while(count<n){
        arr[count]=0;  //after countin no. of non zeros copy 0 for rest of the elemnt
        count++;
    }
        
    }
};