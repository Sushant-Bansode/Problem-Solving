#include<bits/stdc++.h>
using namespace std;

 void solve( ){
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for(int i = 0; i< n; ++i){
        cin >> x[i];
        cin >> y[i];
    }

    sort(x.begin( ), x.end( ));
    sort(y.begin( ), y.end( ));
    
    int t = (n-1)/2;
    pair<int,int> meet;
    
    meet.first = x[t];
    meet.second = y[t];
    int cost = 0;
    for(int i = 0; i < n; ++i){
      cost += abs(meet.first - x[i]);
      cost += abs(meet.second - y[i]);
    }  
    
    cout << cost << endl;
 }

int main( ){
    int t;
    cin >> t;
    while(t--){
        solve( );
    }
}