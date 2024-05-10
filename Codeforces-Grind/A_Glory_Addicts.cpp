#include<bits/stdc++.h>
using namespace std;
bool sortbysec(long &a,long &b)
{
    return (a > b);
}

int main( ){
int t;
cin >> t;
while(t--){
int n;
cin >> n;

vector<pair <long,long>> vp(n);
for(int i = 0; i< n; ++i){
cin >> vp[i].first;
}

for(int i = 0; i< n; ++i){
cin >> vp[i].second;
}

vector <long> zero;
vector <long> ones;
for(int i = 0; i< n; ++i){
if(vp[i].first == 1)
ones.push_back(vp[i].second);
else
zero.push_back(vp[i].second);
}

sort(ones.begin(),ones.end(),sortbysec);
sort(zero.begin(),zero.end(),sortbysec);

int c1 = ones.size( );
int c0 = zero.size( );

long long sum = 0;
int i = 0, j = 0;
while( i< c0 && j< c1){
 sum+= 2*ones[i];
 sum+= 2*zero[j];
i++;j++;
}

if(c1 == c0){
  sum-= min(ones.back(), zero.back());  
}
for(int k = i; k < c1; ++k)
sum+= ones[k];

for(int k = j; k < c0; ++k)
sum+= zero[k];

cout << sum << endl;

}

}