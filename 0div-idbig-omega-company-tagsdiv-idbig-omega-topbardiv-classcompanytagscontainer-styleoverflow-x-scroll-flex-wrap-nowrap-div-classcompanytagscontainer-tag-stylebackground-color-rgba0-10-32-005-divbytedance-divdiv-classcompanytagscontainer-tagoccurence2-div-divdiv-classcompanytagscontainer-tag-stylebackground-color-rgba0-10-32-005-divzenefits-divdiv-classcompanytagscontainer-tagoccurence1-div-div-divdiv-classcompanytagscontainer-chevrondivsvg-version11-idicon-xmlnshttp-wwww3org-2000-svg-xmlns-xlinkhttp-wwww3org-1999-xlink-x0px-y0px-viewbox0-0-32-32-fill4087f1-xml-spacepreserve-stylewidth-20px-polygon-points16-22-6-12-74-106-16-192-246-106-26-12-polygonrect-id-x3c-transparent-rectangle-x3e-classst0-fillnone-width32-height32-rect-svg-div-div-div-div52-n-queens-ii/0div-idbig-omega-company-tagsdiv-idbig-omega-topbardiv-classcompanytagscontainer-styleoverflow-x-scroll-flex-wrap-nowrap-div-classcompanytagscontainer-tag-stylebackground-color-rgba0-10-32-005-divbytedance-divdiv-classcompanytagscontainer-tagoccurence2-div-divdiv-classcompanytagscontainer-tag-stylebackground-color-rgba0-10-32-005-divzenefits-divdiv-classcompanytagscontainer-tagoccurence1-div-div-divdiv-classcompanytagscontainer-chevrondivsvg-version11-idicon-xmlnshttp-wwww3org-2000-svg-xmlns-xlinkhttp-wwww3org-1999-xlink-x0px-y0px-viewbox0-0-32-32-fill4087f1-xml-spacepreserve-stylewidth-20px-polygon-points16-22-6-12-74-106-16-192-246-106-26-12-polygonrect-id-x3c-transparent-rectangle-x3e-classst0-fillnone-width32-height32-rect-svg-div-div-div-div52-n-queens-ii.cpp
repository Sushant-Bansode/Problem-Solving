class Solution {
public:
    vector<bool> col, diag, antidiag;
    int find_sol(int i, int n) {
        int num=0;
        if (i == n) 
            return 1;
        for (int j = 0; j < n; j++) {
            if (!col[j] && !antidiag[i+j] && !diag[i+n-j-1]) {
                col[j] = antidiag[i+j] = diag[i+n-j-1] = true;
                num+=find_sol(i+1, n);
                col[j] = antidiag[i+j] = diag[i+n-j-1] = false;
            }
        }
        return num;
    }
    int totalNQueens(int n) {
        col.assign(n, false);
        diag.assign(2*n-1, false);
        antidiag.assign(2*n-1, false);
        return find_sol(0, n);
    }
};
