// You are given a number n. You need to find the count of digits in n.

int countDigits(int n)
{
    if (n<10)
    {
        return 1;
    }
    return countDigits(n/10)+1;