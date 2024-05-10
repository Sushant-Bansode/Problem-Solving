#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int arr[5][5], temp1 , temp2;    
for (int i = 0; i < 5 ; i++){
for (int j = 0; j < 5 ; j++){
  cin >> arr[i][j];
  if (arr[i][j] == 1 ){
   temp1 = i; 
   temp2 = j;
  }
}
}
int rowswap = abs(3 - (temp1 + 1));
int colswap = abs(3 - (temp2 + 1));
cout << rowswap + colswap ;
}
