#include <stdio.h>
#include <math.h>

#define PI 3.142857

int main()
{
    double mean = 1.0, sd = 2.0, result, sum;
    float x;

    for (x = -20; x < 21; x += 0.5)
    {
        result = (1 / (sqrt(2 * PI * pow(sd, 2))) * exp(-0.5 * pow(((x - mean)/sd), 2)));
        printf("\n Value of X = %f, Value of f(x) = %e", x, result);
    }
    return 0;
}