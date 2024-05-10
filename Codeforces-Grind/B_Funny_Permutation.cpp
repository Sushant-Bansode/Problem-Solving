#include<bits/stdc++.h>
using namespace std;

int main (  ){
int t;
cin >> t;
while(t--){     
long n;
cin >> n;

if(n == 1 || n == 3)
cout << -1 << endl;
else if(n == 2)
cout << 2 << " " << 1 << endl;
else if(n == 4)
cout << 4 << " " << 3 << " " << 1 << " " << 2 << endl;
else if(n > 4 ) {
for(int  i = n; i >4 ; i--)
cout <<i << " ";
cout << 4 << " " << 3 << " " << 1 << " " << 2 << endl; 
}

}    
}