class Solution {
public:
int mod = 1e9+7;
    int numOfSubarrays(vector<int>& arr) {
    int n = arr.size();
    int sum =0,cnt=0,even=0,odd=0;
    
    for(int i=0;i<n;i++){
        sum+=arr[i]; //get prefix sum 
        if(sum%2!=0){ //if odd then add count to the result
            odd++;
            cnt++;
            cnt = (cnt+even)%mod; // if there are even sums available before it then you can 
//make odd sum by substracting from it
        }else{
            even++;
            cnt= (cnt+odd)%mod; // if there are odd sums available before it then
// you can make even sum by substracting from it
        }
    }
    return cnt%mod;
    }
};