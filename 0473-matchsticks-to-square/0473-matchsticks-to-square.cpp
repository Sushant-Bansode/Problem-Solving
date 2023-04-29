class Solution {
public:

int tar;
bool solve(int i,int n,vector<int>&res,vector<int>&ms){
   if(i>=n){
    return (res[0]==res[1]&&res[1]==res[2]&&res[2]==res[3]&&res[3]== tar);
   }
   for(int j=0;j<4;j++){
       if(res[j]+ms[i] > tar)
       continue;
           res[j]+=ms[i];
           if(solve(i+1,n,res,ms))
           return true;
           res[j]-=ms[i];
   }
   return false;
}
bool makesquare(vector<int>& ms){
    int n=ms.size();
    int sum =0;
    for(auto it : ms)
    sum+=it;
    if(sum % 4 != 0)
    return false;
    tar=sum/4;
    sort(ms.rbegin(), ms.rend());
    vector<int>res(4,0);
    return solve(0,n,res,ms);
}
};