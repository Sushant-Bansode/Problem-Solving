class Solution {
public:
    int numTrees(int n) {
        vector<int> totalTrees(n+2);
        totalTrees[0] = 1;
        totalTrees[1] = 1;
        totalTrees[2] = 2;

        for(int i=3;i<=n;i++){
            int j=i-1, k = 0;
            int temp = 0;
            while(k<i){
                temp += (totalTrees[j--]*totalTrees[k++]);
            }
            totalTrees[i] = temp;
        }
        return totalTrees[n];
    }
};