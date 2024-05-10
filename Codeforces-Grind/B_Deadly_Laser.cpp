#include<bits/stdc++.h>
using namespace std;

int main ( ) {
int t;
cin >> t;
while( t--){
int m,n,s1,s2,d;
cin >> m >> n >> s1 >> s2 >> d;
int d1 = abs(m-s1) + abs(n-s2);
bool flag1 = false;
bool flag2 = false;
bool flag3 = false;
bool flag4 = false;
for(int i = 1; i <= n; i++) {
d1 = abs(i-s1) + abs(1-s2);
 if( d1<= d ){
    flag1 = true;
    break;
}
}

for(int i = 1; i <= m; i++) {
d1 = abs(1-s1) + abs(i-s2);
if( d1<= d ){
    flag2 = true;
    break;
}
}

for(int i = 1; i <= m; i++) {
d1 = abs(n-s1) + abs(i-s2);
if( d1<= d ){
    flag3 = true;
    break;
}
}

for(int i = 1; i <= n; i++) {
d1 = abs(i-s1) + abs(m-s2);
if( d1 <= d ){
    flag4 = true;
    break;
}
}

if( (flag1 && flag4) || (flag2 && flag3) )
cout << -1 << endl;
else
cout << (m+n)-2 << endl;



}
return 0;
}