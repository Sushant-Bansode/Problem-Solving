class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
     priority_queue<int> minHeap;
        int r = matrix.size();
        int c = matrix[0].size();
        for (int i = 0; i<r; i++) {
            for (int j = 0; j<c; j++){
                minHeap.push(-1*matrix[i][j]);
            }
        }
        while (k>1) {
            minHeap.pop();
            k--;
        }
        return -1*minHeap.top();
    }
};