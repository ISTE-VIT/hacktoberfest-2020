#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array";
    cin >> n;
    int a[n];
    cout << "Enter elements of array";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int s = 0;
    int e = n - 1; //Initialize start and end indices
    while (s < e)
    {
        swap(a[s], a[e]);
        s++;
        e--;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " "; //Print Reversed Array

    return 0;
}