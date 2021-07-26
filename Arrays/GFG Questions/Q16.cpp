// Given an array a[ ] of size N. The task is to check if array is sorted or not. 
// A sorted array can either be increasingly sorted or decreasingly sorted. 
// Also consider duplicate elements to be sorted.

class Solution{
  public:
    //Complete this function
    int isSorted(int arr[],int n)
    {
       bool incFlag = true, decFlag = true;
       for (int i=0; i<n; i++)
       {
           if(arr[i+1] < arr[i])
           {
               incFlag = false; // checking increasing array
           }
           else if(arr[i+1] > arr[i])
           {
               decFlag = false; // checking decreasing array
           }
       }
       if(decFlag || incFlag)
       {
           return 1;
       }
       else
       {
           return 0;
       }
    }
};