#include<bits/stdc++.h>
using namespace std;

int main( ){
int t;
cin >> t;
while(t--){
int n;
cin >> n;

long arr[n];
for(int i = 0 ; i< n; ++i)
cin >> arr[i];
long min = *min_element(arr, arr + n);

int ans = 0;
for(int i = 0 ; i< n; ++i){
long temp = 2*min -1;
if (arr[i] > temp)
ans += (arr[i]/temp);

}
cout << ans << endl;
}

}