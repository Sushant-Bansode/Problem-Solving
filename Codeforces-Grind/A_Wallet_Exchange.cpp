#include<bits/stdc++.h>
using namespace std;

void sushant( ){
    int a, b;
    cin >> a >> b;
    int ra = a%2;
    int rb = b%2;

    if(ra == rb){
        cout << "Bob" << endl;
    }else{
        cout << "Alice" << endl;
    }

}

int main( ){
    int t;
    cin >> t;
    while(t--){
        sushant( );
    }
}
