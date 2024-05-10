#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    int temp[3];
    for (int i = 0; i < 3; ++i)
    {
        cin >> arr[i];
        temp[i] = arr[i];
    }
    sort(arr, arr + 3);
    for (auto x : arr)
    {
        cout << x << endl;
    }
    cout << endl;
    for (auto x : temp)
    {
        cout << x << endl;
    }
}