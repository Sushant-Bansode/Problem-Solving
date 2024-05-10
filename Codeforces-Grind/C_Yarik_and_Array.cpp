#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        long long ans = arr[0];
        long long sum = arr[0];

        for (int i = 1; i < n; ++i) {
            if ((sum < 0 && arr[i] % 2 != arr[i - 1] % 2) || (sum >= 0 && arr[i] % 2 == arr[i - 1] % 2)) {
                // If the sum becomes negative and parities are different or
                // the sum is non-negative and parities are the same, start a new subarray.
                sum = arr[i];
            } else {
                sum += arr[i];
            }

            ans = max(sum, ans);
        }

        cout << ans << endl;
    }

    return 0;
}
