class Solution {
public:
bool isPalindrome(string s) {
// Transforming Everything into smaller characters, Can also do the same using defining a Separate Function only for this, step...
transform(s.begin(), s.end(), s.begin(), ::tolower);
string s1;
string s2;
int n = s.size();
// Pushing all characters that are Small Characters and Numbers into the string s1.
for(int i=0; i<n; i++){
if((s[i]>=97 && s[i]<=122) || s[i]>=48 && s[i]<=57){
s1.push_back(s[i]);
}
}
// string s2 equals to store the original the string s1 because we later need to compare the reverse of it with s2 just for checking purpose...
s2 = s1;
reverse(s1.begin(),s1.end());
if(s1 == s2){
return true;
}
else
return false;
}
};