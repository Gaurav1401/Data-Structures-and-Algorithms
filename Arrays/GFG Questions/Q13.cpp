// Given an unsorted array arr[] of size N, rotate it by D elements in the counter-clockwise direction. 

void rotateArr(int arr[], int d, int n){
    
    int temp[d];
    for(int j=0; j<d; j++)
    {
        temp[j] = arr[j]; // Storing first d elements in temporary array
    }
    for(int i=d; i<n; i++)
    {
        arr[i-d] = arr[i]; // moving the rest of the elements to the initial positions
    }
    for(int i=0; i<d; i++)
    {
        arr[n-d+i] = temp[i]; // Initial d elements to the last d positions
    }
}