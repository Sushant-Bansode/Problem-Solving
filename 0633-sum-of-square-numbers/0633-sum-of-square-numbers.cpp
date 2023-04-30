class Solution {
public:
    bool judgeSquareSum(int n) {
    long int start = 0;
    long int end = sqrt(n);
    while (start <= end)
    {
        long int sum = start * start + end * end;
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