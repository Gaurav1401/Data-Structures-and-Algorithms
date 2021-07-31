// Given an array a[] of size n. Output sum of each subarray of the given array
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0; i<5; i++)
    {
        int sum = 0;
        for (int j=i; j<5; j++)
        {
            sum+=arr[j];
            cout<<sum;
        }
    }

    return 0;
}