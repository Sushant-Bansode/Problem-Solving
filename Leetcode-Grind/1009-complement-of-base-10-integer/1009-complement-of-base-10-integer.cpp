class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0)
        return 1;
        int num = n;
        int mask = 0;
        while(num)
        {
            mask = mask<<1 | 1;
            num >>= 1;
        }
        return n ^ mask;
    }
};