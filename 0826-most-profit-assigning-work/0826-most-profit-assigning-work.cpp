class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker){
        int n=difficulty.size();
        vector<pair<int,int>> nums;

        for(int i=0;i<n;i++){
            nums.push_back({profit[i],difficulty[i]});
        }
        sort(nums.begin(),nums.end());
        int index=n-1;
        int ans=0;
        sort(worker.begin(),worker.end());
        
        for(int i=worker.size()-1;i>=0;i--){
            while(index>=0 && nums[index].second>worker[i]) index--;
            if(index==-1) continue;
            ans+=nums[index].first;
        }
        return ans;        
    }
};