class Solution {
public:
    bool areNumbersAscending(string s) 
    {
        vector<int>v;
        string x="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='0' &&s[i]<='9')
            {
                x+=s[i];
            }
            else if(x.size()>0)
            {
                v.push_back(stoi(x));
                x="";
            }
        }
        if(x.size()>0)
            {
                v.push_back(stoi(x));
              
            }
        for(int i=1;i<v.size();i++)
        {
            if(v[i]<=v[i-1])return false;
        }
        return true;
        
    }
};