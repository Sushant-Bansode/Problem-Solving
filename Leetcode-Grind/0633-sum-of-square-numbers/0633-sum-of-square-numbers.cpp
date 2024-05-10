class Solution {
public:
    bool judgeSquareSum(int n) {
    long long start = 0;
    long long end = sqrt(n);
    while (start <= end)
    {
        long long sum = start * start + end * end;
        if (sum == n)
            return true;
        else if (sum > n)
            end--;
        else if (sum < n)
            start++;
    }
    return false;

        
    }
};