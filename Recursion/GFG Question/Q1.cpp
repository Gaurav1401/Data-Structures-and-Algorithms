// Print numbers from 1 to N without the help of loops.

void printNos(int N)
{
    if(N < 1)
    {
        return;
    }
    printNos(N-1);
    cout<<N<<" ";
}