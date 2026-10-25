#include <stdio.h>

#define PI 3.14159

int main(void)
{
    double r;
    printf("Enter radius: ");
    scanf("%lf", &r);
    printf("Circumference = %.2f\n", 2 * PI * r);
    printf("Area = %.2f\n", PI * r * r);
    return 0;
}