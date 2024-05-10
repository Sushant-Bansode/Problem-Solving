class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int p:nums){
            pq.push(p);
        }
        long long res=0;
        while(k--){
            int top=pq.top(); 
            pq.pop();
            res+= top;
            if(top%3)pq.push(top/3+1); // pushing Ceil value
            else pq.push(top/3);
        }
        return res;
    }
};