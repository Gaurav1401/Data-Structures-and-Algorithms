// You are given a number n. You need to recursively find the factorial of n and return it.

int factorial(int N)
{
    if (N < 1)
    {
        return 1;
    }
    return N*factorial(N-1);
}