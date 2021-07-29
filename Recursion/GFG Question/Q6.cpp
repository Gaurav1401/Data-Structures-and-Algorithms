// You are given a number n. You need to find nth Fibonacci number.
// F(n)=F(n-1)+F(n-2); where F(1)=1 and F(2)=1

int fibonacci(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}