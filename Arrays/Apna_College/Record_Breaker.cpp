// A day is a record breaking day if the visitors visiting on that data is more than visitors ever visited
// the park per day before that and the visitors visiting on the very next day are also lesser

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    
    cout << "Enter size of array ";
    cin >> n;
    int arr[n];
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int res = arr[0];
    
    for (int j=1; j<n; j++)
    {
        if (arr[j] > res) 
        {
            res = arr[j];
            if ((arr[j+1] < res) && (j+1 < n))
            {
                cout << endl;
                cout << res << " is record breaking day";
            }
        }
    }
    return 0;
}
