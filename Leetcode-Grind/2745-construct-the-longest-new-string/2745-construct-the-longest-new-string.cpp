class Solution {
public:
    int longestString(int x, int y, int z) {
        if(z > 0) {
            if(y > x) return 4 * (x + 1) + 2 * z - 2;
            return 4 * y + 2 * z + (x - y > 0 ? 2 : 0);
        }
        return 4*(min(x,y) + 1) - 2 - (x == y ? 2 : 0);
    }
};