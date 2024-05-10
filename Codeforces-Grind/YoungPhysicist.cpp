#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;    
 cin >> n;
 int a = 0,b = 0,c = 0,x,y,z;
 while(n--){
 cin >> x >> y >> z;      
 a = a + x;
 b = b + y;
 c = c + z;
 }
 if  (!(a | b | c))
  cout << "YES";
 else 
  cout << "NO";
    return 0;
}
