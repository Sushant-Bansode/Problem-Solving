#include <iostream>
#include <vector>

using namespace std;

vector<int> dfs_order;  // Global vector to store DFS order of leaves

// DFS function to construct DFS order
void dfs(int v, const vector<int>& a) {
    if (v < a.size()) {
        dfs(2 * v, a);     // Left child
        dfs_order.push_back(a[v]);
        dfs(2 * v + 1, a); // Right child
    }
}

// Function to check if array 'a' is a valid DFS order for a complete binary tree
bool isValidDFSOrder(const vector<int>& a) {
    dfs_order.clear();
    dfs(1, a);  // Start DFS from the root (assuming root index is 1)

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != dfs_order[i]) {
            return false;
        }
    }
    return true;
}

// Function to check if a complete binary tree exists for given DFS order
bool isCompleteBinaryTree(const vector<int>& a) {
    return isValidDFSOrder(a);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (isCompleteBinaryTree(a)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
