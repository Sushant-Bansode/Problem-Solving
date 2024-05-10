class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> mp;
        int n = s.size();
        for(int i=0;i<s.size();i++)
            mp[s[i]]=i;

        vector<int> ans;
        int i=0,j;
        // Two Pointers...
        while(i<n){
            int m = mp[s[i]];
            int count = 0;
            for(j=i;j<=m;j++)
            {
                if(mp[s[j]]>m)
                    m = mp[s[j]];
                count++;
            }
            i = j;
            ans.push_back(count);
        }
        return ans;
    }
};