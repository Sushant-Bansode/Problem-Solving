class Solution {
public:
void solve(int index,int k,vector<int> &cookies,vector<int> &v,int &ans){
int n=cookies.size();
if(index==n){
int tot=INT_MIN;
for(int i=0; i<k; i++){
tot=max(tot,v[i]);
}
ans=min(ans,tot);
return;
}
for(int i=0; i<k; i++){
v[i]+=cookies[index];
solve(index+1,k,cookies,v,ans);
v[i]-=cookies[index];
}
}

int distributeCookies(vector<int>& cookies, int k) {
    int n=cookies.size();
    vector<int> v(k,0);
    int ans=INT_MAX;
    solve(0,k,cookies,v,ans);
    return ans;
}
};