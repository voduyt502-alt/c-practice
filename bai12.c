#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int arr[MAX_SIZE];
    int n, i;
    int sum = 0;
    int max;

    printf("Enter number of elements (1-%d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n < 1 || n > MAX_SIZE)
    {
        printf("Invalid size\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
if (arr[i] > max)
{
    max = arr[i];
}
    }

    printf("Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Sum = %d\n", sum);
    printf("Max = %d\n", max);
    return 0;
}