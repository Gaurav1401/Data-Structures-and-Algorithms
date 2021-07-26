// You are given an array arr(0-based indexing). The size of the array is given by n. 
// You need to get the element at index i and return it. If no element exists at i then return -1.

int getByIndex(int arr[],int n,int i)
{
    if (i>=0 && i < n)
    {
        return arr[i];
    }
    else
    {
        return -1;
    }
}