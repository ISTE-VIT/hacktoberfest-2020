#include<bits/stdc++.h>
using namespace std;

void maxActivities(vector<int> start, vector<int> finish, int n)
{
    int i, j;

    cout << "The activities selected are as folllows: ";
    i = 0;
    cout << i << " ";
    for (j = 1; j < n; j++)
    {
        if (start[j] >= finish[i])
        {
            cout << j << " ";
            i = j;
        }
    }
}

int main()
{
    vector<int> start = { 1, 3, 0, 5, 8, 5 };
    vector<int> finish = { 2, 4, 6, 7, 9, 9 };
    int n = start.size();
    maxActivities(start, finish, n);
    return 0;
}