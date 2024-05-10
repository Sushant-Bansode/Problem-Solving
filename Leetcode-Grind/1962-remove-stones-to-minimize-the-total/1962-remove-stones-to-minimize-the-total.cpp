class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq(begin(piles), end(piles));

        while(k--){
            int temp= pq.top()- pq.top()/2;

            pq.pop();
            pq.push(temp);

        }

        int ans=0;
        while(pq.size()){
            ans+=pq.top();
            pq.pop();
        }

        return ans;
    }
};