// You are given two numbers n and p. You need to find n^p.

int RecursivePower(int n, int p)
{
    if (p<1)
    {
        return 1;
    }
    else if(p==1)
    {
        return n;
    }
    return RecursivePower(n, p-1)*n;
}