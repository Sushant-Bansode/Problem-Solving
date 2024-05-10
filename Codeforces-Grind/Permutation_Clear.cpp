
#include <bits/stdc++.h>
using namespace std;



int main() {
 int t;
 cin >> t;
 while(t--){
 int arr[100001] = {0};
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i< n; ++i){
    cin >> v[i];    
    }
    
    int k;
    cin >> k;
    int v2[k];
    for(int i = 0; i< k; ++i){
    cin >> v2[i];
    arr[v2[i]]++;
    }

     
    for(int i = 0 ; i < n; ++i){
    if(arr[v[i]] == 1){
    continue;    
    } 
    else
    cout << v[i] << " ";
    }
 cout << endl;    
 }
	return 0;
}
