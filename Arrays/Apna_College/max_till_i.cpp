// Given an array a[] of size n. For every i from 0 to n-1 output max of (a[0],a[1],.....,a[i])
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int mx = INT_MIN;
    int arr[5];
    for(int i=0; i<6; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0; i<6; i++)
    {
        mx = max(arr[i], mx);
        cout<<mx<<" ";
    }

    return 0;
}
