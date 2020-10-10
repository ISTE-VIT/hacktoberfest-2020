#include<bits/stdc++.h>
using namespace std;
 
struct Job
{
    char id;   
    int dead;   
    int profit;  
};

bool comp(Job a, Job b)
{
    return (a.profit > b.profit);
}

void jobScheduling(vector<Job> arr, int n)
{
    sort(arr.begin(), arr.end(), comp);

    vector<int> result(n); 
    vector<bool> slot(n);  

    for (int i = 0; i < n; i++)
        slot[i] = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = min(n, arr[i].dead) - 1; j >= 0; j--)
        {
            if (slot[j] == false)
            {
                result[j] = i;  
                slot[j] = true; 
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
        if (slot[i])
            cout << arr[result[i]].id << " ";
}

int main()
{
    vector<Job> arr = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, {'d', 1, 25}, {'e', 3, 15} };
    int n = arr.size();
    cout << "Following is the maximum profit sequence of jobs\n";
    jobScheduling(arr, n);
    return 0;
}