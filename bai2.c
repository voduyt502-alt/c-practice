#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);

    if (b != 0)
    {
        printf("Quotient = %.2f\n", (double)a / b);
    }
    else
    {
        printf("Cannot divide by zero\n");
    }

    return 0;
}
