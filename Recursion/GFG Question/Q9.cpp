// You are given a two numbers a and b. Find their GCD using recursion.

int GCD(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return GCD(b, a%b);
}