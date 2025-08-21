#include <stdio.h>
#include <math.h>

int main(){
    double x;

    printf("ENTER A NUMBER:");
    scanf("%lf", &x);

    printf("Square root = %.2f\n", sqrt(x));
    printf("Absolute value = %.2f\n", fabs(x));

    return 0;
}
