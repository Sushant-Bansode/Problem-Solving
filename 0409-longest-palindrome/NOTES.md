Logic
All elements on either side of the palindrome have to be even if number so that thay can equally be distributed on each side. Other than the only element which can have odd number of times repeated is the one at the middle in case of a string of odd length.
​
Example: ababcccbaba
​
Other than c all other elements are even in numbers/quantity. Only c is odd as it is centered [though even number of c's is also allowed].
​
// C++ Solution:
class Solution {
public:
int longestPalindrome(string s) {
unordered_map<int,int> mp;
int res = 0;
for(int i = 0; i < s.length(); i++) {
mp[s[i]]++;
// if a particular character occurs in even we can definitely take it and place both side of middle.
if(mp[s[i]]%2==0) {
res += mp[s[i]];
mp[s[i]] = 0;
}
}
for(auto x: mp) {
// if one or more(take only one of them) character occurs only once we can place it at the middle of the palindrome string
if(x.second==1) {
res++;
break;
}
}
return res;
}
};
​
​
​
​
​
​
​