#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int arr[MAX_SIZE];
    int n, i, temp;

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

    for (i = 0; i < n / 2; i++)
    {
       temp = arr[i];
arr[i] = arr[n - 1 - i];
arr[n - 1 - i] = temp;
    }

    printf("Reversed: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}