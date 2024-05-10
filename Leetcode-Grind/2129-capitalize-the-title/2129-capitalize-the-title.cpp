class Solution {
public:
    string capitalizeTitle(string title) {
          title = " " + title;
        int n = title.size(), cnt = 0;
        string st(n, 'a');
        for(int i=n-1; i >= 0; i--) {
            if(title[i] == ' ')  {
                st[i] = ' ';
                if(cnt > 2) st[i+1] = toupper(title[i+1]);
                cnt = 0;
            }
            else st[i] = tolower(title[i]), cnt++;    
        }
        string ans(st.begin()+1, st.end());
        return ans;
    }
};