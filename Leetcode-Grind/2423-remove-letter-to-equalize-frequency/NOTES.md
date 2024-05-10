Raw Logic Of mine was some what like this
class Solution {
public:
bool equalFrequency(string word) {
map<char,int> mp;
for(int i = 0; i < word.length( ); ++i){
mp[word[i]]++;
}
vector<int>temp;
for(auto x : mp){
temp.push_back(x.second);
}
map<int,int> mp2;
for(int i = 0; i < temp.size( ); ++i){
mp2[temp[i]]++;
}
vector<int> temp2;
for(auto x : mp2){
temp2.push_back(x.second);
}
​
if(temp2.size( ) == 1){
return true;
}
else if(temp2.size() == 2 && temp2[1]-temp2[2] == 1){
return true;}
else
return false;
}
};
​
/*sort(temp.begin( ), temp.end( ));
for(int i = 0; i < temp.size( ); ++i){
if(temp[i] == 1 && )
if(i > 0 && temp[i-1] != temp[i] && abs(temp[i-1]-temp[i]) ==1 )
return true;
else if(i >0 && temp[i-1]-temp[i] ==0 && temp[i-1] ==1 && temp[i] ==1)
return true;
}
return false;
*/