class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        unordered_set<string> st;
        for (auto& w : words) {
            string odd, even;
            for (int i = 0; i < w.size(); i++) {
                if (i % 2) even += w[i];
                else odd += w[i];
            }
            sort(even.begin(), even.end());
            sort(odd.begin(), odd.end());
            st.insert(even + odd);
        }
        return st.size();
    }
};