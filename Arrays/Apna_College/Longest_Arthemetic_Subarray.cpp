
// An arthemetic array is an array that contains atleast two integers and the difference between 
// consecutive integers is equal like {3, 3, 3}, {9, 7, 5, 3}

#include "bits/stdc++.h"
using namespace std;
int main()
{
    int arr[7] = {10, 7, 4, 6, 8, 10, 11};
    int curr = 2; // Current arthemetic subarray length
    int pd = arr[1] - arr[0]; // previous common difference
    int ans = 2; // max arthemetic subarray length
    int j = 2;
    
    while (j<7)
    {
        if(pd == arr[j] - arr[j-1])
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans << endl;
    return 0;
}
