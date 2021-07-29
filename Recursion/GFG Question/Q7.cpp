// You are given a number n. You need to recursively find the nth term of the series S that is given by:
// S(n) = n+ n*(S(n-1)) and S(0) = 1

int theSequence(int N)
{
    int a;
    if (N == 0)
    {
        return 1;
    }
    a = N + N*theSequence(N-1);
    return a;
}