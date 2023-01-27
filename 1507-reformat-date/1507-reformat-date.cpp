class Solution {
public:
    
string required(string s){
unordered_map<string,string> month = {{"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"}, {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}};
return month[s];
}    
    
string reformatDate(string date) {        
string res;
if(date.length() == 13)
{
res=date.substr(9,4)+'-'+required(date.substr(5,3))+'-'+date.substr(0,2);         
}
else if(date.length() == 12)
{
res=date.substr(8,4)+'-'+required(date.substr(4,3))+'-'+'0'+date.substr(0,1);     
}

return res;    
}    
};