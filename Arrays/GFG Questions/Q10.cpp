// Given an array arr[] of size N and two elements x and y,
// use counter variables to find which element appears most in the array, x or y.
// If both elements have the same frequency, then return the smaller element.

int majorityWins(int arr[], int n, int x, int y) {
 
    int freq_x = 0, freq_y = 0; // to keep track of the frequency of x and y
    for(int i=0; i<n; i++)
    {
        if(arr[i] == x)
        {
            freq_x++; // calculating freq of x
        }
        else if(arr[i] == y){freq_y++;} // freq of y
    }
    if (freq_x == freq_y){
        if (x<y){return x;}
        else {return y;}
    }
    else if (freq_x > freq_y){
        return x;
    }
    else {
        return y;
    }
    
}