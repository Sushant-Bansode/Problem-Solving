#include<bits/stdc++.h>
using namespace std;

void print(string s, int i, string op){
 if(i == s.length( )){
    cout << op << endl;
    return;
 }
 
 // Exclude Call 
 print(s, i+1, op); 
 // Include Call
 op += s[i];
 print(s, i+1, op); 
}

int main( ){
string s = "abc" ;
string op;
print(s, 0, op); 

return 0;
}