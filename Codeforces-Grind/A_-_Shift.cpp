#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    if (k >= n)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            arr[i] = 0;
        }
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            arr[i] = 0;
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                arr[count] = arr[i]; // count no of non zeros and place them from 0
                count++;
            }
        }
        while (count < n)
        {
            arr[count] = 0; // after countin no. of non zeros copy 0 for rest of the elemnt
            count++;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}