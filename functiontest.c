#include <stdio.h>

int func (int m);

int main()
{
    int x, funcx;
    printf(" Random number input: ");
    scanf(" %d", &x);
    printf("\n Value of x = %d", x);
    funcx = func(x);
    printf("\n funcx = %d", funcx);
    return 0;
}

int func(int m)
{
    if (m == 0)
    {
        printf("\n value of m = %d", m);
        return (1);
    }
    else
    {
        printf("\n Value of !m = %d", m);
        return(m * func(m - 1));
    }
}


