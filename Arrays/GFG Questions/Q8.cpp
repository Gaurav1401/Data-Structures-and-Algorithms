// Given an array arr[] of size N containing positive integers and an integer X, 
// find the element in the array which is smaller than X and closest to it.

int immediateSmaller(int arr[], int n, int x)
{
    int temp = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > temp && arr[i] < x)
        {
            temp = arr[i];
        }
    }
    if (temp == -1){return -1;}
    else{return temp;}
}