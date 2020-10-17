#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &v, int term)
{
    int l=0,r=v.size()-1,mid;    
    while(l<=r)
    {
        mid=(l+r)/2;
        if(v[mid]==term)
            return mid;
        else if(v[mid]>term)
                r=mid-1;
             else
                l=mid+1;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<"Enter the term to search for: ";
    int term;
    cin>>term;
    sort(v.begin(),v.end());
    int found=binarySearch(v,term);
    if(found==-1)
        cout<<"Element is not present in array.";
    else
        cout<<"Element "<<term<<" is present.";
    return 0;
}
