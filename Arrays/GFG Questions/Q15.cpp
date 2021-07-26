// Given an array a[ ] of size N. The task is to find the median and mean of the array elements. 
// Mean is average of the numbers and median is the element which is smaller than half of the elements and greater than remaining half.  
// If there are odd elements, the median is simply the middle element in the sorted array. 
// If there are even elements, then the median is floor of average of two middle numbers in the sorted array. 
// If mean is floating point number, then we need to print floor of it

class Solution{
    public:
    //Function to find median of the array elements.
    int median(int A[],int N)
    {
        sort(A,A+N);
        int med = 0;
        if (N%2 == 0)
        {
            med = (A[N/2 -1]+A[N/2 + 1 -1])/2;
            return round(med);
        }
        else
        {
            med = A[(N+1)/2 - 1];
            return med;
        }
        //If median is in fraction then convert it to integer and return
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        int sum=0, mean;
        for(int i=0; i<N; i++)
        {
            sum += A[i];
        }
        mean = sum/N;
        return mean;
    }
};