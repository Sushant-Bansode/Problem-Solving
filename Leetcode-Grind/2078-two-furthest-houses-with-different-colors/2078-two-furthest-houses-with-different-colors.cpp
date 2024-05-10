class Solution {
public:
    int maxDistance(vector<int>& colors) {
  int n = colors.size();
        int from_start = 0;   
        int from_end = n - 1; 
        while (colors[0] == colors[from_end])
            from_end--;
        while (colors[n - 1] == colors[from_start])
            from_start++;
        return max(from_end, n - from_start - 1);
    }
};