class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size(),m=heights[0].size();
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        vector<vector<int>> dist(n,vector<int> (m,INT_MAX));
        dist[0][0]=0;
        pq.push({0,{0,0}});
        vector<int> dx={-1,0,1,0};
        vector<int> dy={0,-1,0,1};
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int diff=it.first;
            int r=it.second.first,c=it.second.second;
            if(r==n-1 && c==m-1){
                return diff;
            }
            for(int i=0;i<4;i++){
                int nR=r+dx[i],nC=c+dy[i];
                if(nR>=0 &&nR<n && nC>=0 && nC<m){
                    int newEffort=max(abs(heights[r][c]-heights[nR][nC]),diff);
                    if(newEffort<dist[nR][nC]){
                        dist[nR][nC]=newEffort;
                        pq.push({newEffort,{nR,nC}});
                    }
                }
            }
        }
        return 0;
    }
};