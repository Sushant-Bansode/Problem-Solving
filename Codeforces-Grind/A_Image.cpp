
#include<bits/stdc++.h>
using namespace std;

int main ( ) {
int t;
cin >> t;
while( t--){
set<char> s1;
char ch;
for(int i = 0; i< 4; i++ ){
 cin >> ch;
  s1.insert(ch);    
}

cout << s1.size() - 1 << endl;

}
return 0;
}