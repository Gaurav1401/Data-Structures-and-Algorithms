//  You are given a number n. You need to recursively sum the numbers from 1 to n and return the sum.

int recursiveSum(int N)
{
    if (N==0)
    {
        return 0;
    }
    return recursiveSum(N-1) + N;
}