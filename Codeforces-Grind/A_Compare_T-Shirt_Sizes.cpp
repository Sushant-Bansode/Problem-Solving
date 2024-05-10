#include<bits/stdc++.h>
using namespace std;

int main (  ){
int t;
cin >> t;
while(t--){     
string a,b;
cin >> a;
cin >> b;
int val1=0;
int val2=0;

map<char,int> mp1;
map<char,int> mp2;
int count1 = 0, count2 = 0;
for(int i = 0;i<a.size();++i){
if(a[i] == 'S')
val1 = 1;
else if(a[i] == 'M')
val1 = 2;
else if(a[i]== 'L')
val1 = 3;

if(a[i]== 'X')
count1++;
}

for(int i = 0;i<b.size();++i){
if(b[i] == 'S')
val2 = 1;
else if(b[i] == 'M')
val2 = 2;
else if(b[i]== 'L')
val2 = 3;

if(b[i]== 'X')
count2++;
}

if(val1 > val2)
cout<<">"<<endl;
else if(val1 < val2)
cout<<"<"<<endl;
else if(val1==val2){
 if(count1 == count2)
 cout <<"="<< endl;
 else if(count1 > count2 && val1 == 1)
 cout <<"<"<<endl;
 else if(count1 < count2 && val1 == 1)
 cout <<">"<<endl;
 else if(count1 > count2 && val1 > 1)
 cout <<">"<<endl;
 else if(count1 < count2 && val1 > 1)
 cout <<"<"<<endl; 
}

 
}    
}