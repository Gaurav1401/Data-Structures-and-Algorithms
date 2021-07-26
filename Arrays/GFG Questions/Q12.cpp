// Given an array arr of size n. You need to reverse the array.

void reverseArray(int arr[], int n) {
    int low = 0, high = n-1;
    while(low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}