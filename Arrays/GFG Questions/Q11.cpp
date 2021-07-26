// Given an array arr of size n, find maximum and minimum elements in the array.

int maximumElement(int arr[],int n)
{
    int max = INT_MIN;
    for (int i=0; i<n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int minimumElement(int arr[],int n)
{
    int min = INT_MAX;
    for (int i=0; i<n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}