class Solution {
public:
vector<int> findAnagrams(string s, string p) {
if(s.length( )<p.length( )){
return { };
}
// Trying to do the most optimised solution using sliding window...
vector<int>ans;
vector<int>CT(256,0);
vector<int>CP(256,0);
// Getting 1st Substring and the Start of the window.
for(int i = 0; i<p.length( ); ++i){
CT[s[i]]++;
CP[p[i]]++;
}
// Took 1st One Separately so as to include the last substring check.
if(CP == CT){ ans.push_back(0);}
for(int i = p.length( ); i< s.length( ); ++i){
// Increasing the next one of the Window
CT[s2[i]]++;
// Decreasing the Previous one of the Window
CT[s2[i-s1.length( )]]--;
// To Include the Last Substring Check.
if(CP == CT){
ans.push_back(i-p.length( )+1);
}
}
return ans;
}
};