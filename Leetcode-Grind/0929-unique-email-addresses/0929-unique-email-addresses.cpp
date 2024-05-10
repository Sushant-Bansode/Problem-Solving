class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>s;
        for(auto i : emails){
            string ok="";
            bool plus=false;
            bool atRate=false;
            for(int j=0;j<i.size();j++){
                if(atRate){
                    ok+=(char)(i[j]);
                    continue;
                }
                if(i[j]=='@') atRate=true , ok+=(char)(i[j]);
                if(plus) continue;
                if(i[j]>='a' && i[j]<='z') ok+=(char)(i[j]);
                if(i[j]=='+') plus=true;
            }
            s.insert(ok);
        }
        return s.size();
    }
};