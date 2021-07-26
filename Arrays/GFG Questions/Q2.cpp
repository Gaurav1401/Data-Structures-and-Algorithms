//You are given an array arr(0-based index). The size of the array is given by sizeOfArray. 
// You need to insert an element at given index and print the modified array.



// sizeOfArray = 6
// arr[] = {1, 2, 3, 4, 5}
// index = 2, element = 90

// Step 1:- 1, 2, _, 3, 4, 5  arr[i+1] = arr[i]
// Step 2:- 1, 2, 90, 3, 4, 5   arr[index] = element
void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
{
    int n = sizeOfArray;
    for(int i= n-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    
}