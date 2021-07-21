#include <stdio.h>

int checkprime(int n)
{
    if (n > 1)
    {
        for (int i = 2; i < n / 2; i++)
        {
            if (n % i == 0)
                return 0;
        }
        return 1;
    }
    else
        return 0;
}

int nextprime(int n)
{
    int flag = 1;
    while (flag)
    {
        n++;
        if (checkprime(n) == 1)
        {
            flag = 0;
            return n;
        }
        
    }
}