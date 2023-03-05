# After reaching the second 1 on the array since the condition is satisfied A[i]<=A[i-1] so we need to update the A[i] by A[i-1]+1.
At the same time we need to keep track of result by
result += A[i-1]+ 1 - A[i];