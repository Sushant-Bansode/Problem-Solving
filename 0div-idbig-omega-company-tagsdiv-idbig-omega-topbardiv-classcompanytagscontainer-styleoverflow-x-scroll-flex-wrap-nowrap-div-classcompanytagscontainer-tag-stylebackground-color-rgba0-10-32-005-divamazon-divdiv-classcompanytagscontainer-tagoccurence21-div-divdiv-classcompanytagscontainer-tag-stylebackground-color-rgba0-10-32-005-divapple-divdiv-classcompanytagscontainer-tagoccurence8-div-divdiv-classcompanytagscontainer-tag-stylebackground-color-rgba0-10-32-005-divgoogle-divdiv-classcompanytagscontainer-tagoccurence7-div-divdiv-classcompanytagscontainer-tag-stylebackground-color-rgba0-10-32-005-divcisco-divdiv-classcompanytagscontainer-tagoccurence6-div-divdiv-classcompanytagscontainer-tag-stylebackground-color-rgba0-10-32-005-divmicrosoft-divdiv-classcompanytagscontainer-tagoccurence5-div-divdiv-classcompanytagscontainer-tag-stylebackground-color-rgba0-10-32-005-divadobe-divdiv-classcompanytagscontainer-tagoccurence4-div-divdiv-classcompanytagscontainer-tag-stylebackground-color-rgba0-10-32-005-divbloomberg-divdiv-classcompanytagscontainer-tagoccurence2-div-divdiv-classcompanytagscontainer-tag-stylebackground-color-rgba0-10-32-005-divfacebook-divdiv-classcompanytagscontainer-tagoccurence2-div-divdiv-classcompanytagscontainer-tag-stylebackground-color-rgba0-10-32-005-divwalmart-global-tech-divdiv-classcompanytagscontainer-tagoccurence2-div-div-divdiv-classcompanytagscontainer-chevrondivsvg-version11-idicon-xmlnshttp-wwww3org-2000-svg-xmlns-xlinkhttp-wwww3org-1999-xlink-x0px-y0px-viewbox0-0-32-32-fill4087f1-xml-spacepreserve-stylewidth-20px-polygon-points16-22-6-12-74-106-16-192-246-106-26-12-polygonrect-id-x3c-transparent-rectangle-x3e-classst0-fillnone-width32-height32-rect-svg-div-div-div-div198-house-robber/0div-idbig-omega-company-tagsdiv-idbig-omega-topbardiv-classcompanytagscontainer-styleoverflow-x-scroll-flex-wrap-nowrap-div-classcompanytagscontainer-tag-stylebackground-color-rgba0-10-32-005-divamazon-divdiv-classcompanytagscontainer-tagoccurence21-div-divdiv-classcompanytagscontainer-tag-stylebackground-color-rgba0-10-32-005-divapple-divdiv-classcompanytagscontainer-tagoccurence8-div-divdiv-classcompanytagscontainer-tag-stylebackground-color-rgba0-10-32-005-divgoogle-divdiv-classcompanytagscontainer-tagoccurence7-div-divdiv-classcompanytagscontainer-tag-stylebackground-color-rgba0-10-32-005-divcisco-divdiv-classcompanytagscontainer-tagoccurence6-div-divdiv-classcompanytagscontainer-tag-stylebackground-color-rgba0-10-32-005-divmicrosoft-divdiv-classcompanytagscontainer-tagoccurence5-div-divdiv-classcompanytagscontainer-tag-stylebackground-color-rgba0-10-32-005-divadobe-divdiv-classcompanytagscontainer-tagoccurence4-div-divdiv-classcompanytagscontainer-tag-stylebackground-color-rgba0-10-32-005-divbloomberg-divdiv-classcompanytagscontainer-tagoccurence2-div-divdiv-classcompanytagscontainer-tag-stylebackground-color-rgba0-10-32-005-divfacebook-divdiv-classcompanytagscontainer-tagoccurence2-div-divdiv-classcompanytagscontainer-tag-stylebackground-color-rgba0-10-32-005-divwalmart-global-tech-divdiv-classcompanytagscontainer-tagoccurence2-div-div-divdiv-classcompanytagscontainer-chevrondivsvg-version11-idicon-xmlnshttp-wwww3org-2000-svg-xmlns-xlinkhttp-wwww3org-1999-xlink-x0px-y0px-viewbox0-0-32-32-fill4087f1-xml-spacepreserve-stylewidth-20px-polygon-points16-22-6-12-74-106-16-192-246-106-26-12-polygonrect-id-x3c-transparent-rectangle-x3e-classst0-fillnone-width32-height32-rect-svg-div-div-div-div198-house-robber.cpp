class Solution {
public:
    int rob(vector<int>& arr) {
        int prev = arr[0];
        int prev2=0;
	    for(int i=1;i<arr.size();i++){
	        int pick = arr[i];
	        if(i>1) pick += prev2;
	        int notpick = 0 + prev;
	        int curi = max(pick,notpick);
	        prev2=prev;
	        prev=curi;
	    }
	    
	    return prev;
    }
};