class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int low = 0, high = arr.size( ) - 1;
        while(low<=high){
            int mid = (low+high)/2;
            if((mid == 0 || arr[mid-1]<=arr[mid]) && (mid == arr.size()-1 || arr[mid+1]<=arr[mid])){
                return mid;
            }
        if(mid >0 && arr[mid-1]>= arr[mid]){
            high = mid-1;
        }else{
            low = mid + 1;
        }
        }
 return -1;       
    }
};