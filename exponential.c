#include <stdio.h>
#include <math.h>

int main()
{
    double x, absx, limit = 1 * pow(10, -6), term = 1.0, sum = 1.0, expans, diff;
    int i, n = 1;

    printf("Input value of x: ");
    scanf("%lf", &x);
    absx = x<0? -x:x;

    do
    {
        term *= (absx / n);
        sum += term;
        printf("\n term = %le    sum = %le     n term is %d", term, sum, n);
        n += 1;
    }

     while (term >= limit);

     sum = x<0? (1.0/sum):sum;
     expans = exp(x);
     diff = expans - sum;
     printf("\n C Lib Function exp(x) = %le       My code sum = %le", expans, sum);
     printf("\n\nThe error bewteen infinite series and math lib func is %le\n\n", diff);
}