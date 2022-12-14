// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    if(n == 1){
        if(isBadVersion(1)){
            return 1;
        }
    }else{
        for(int i = 1; i<=n; ++i){
        if(isBadVersion(i)){
            return i;
        }
    } 
}
    return 0;
    }
};