#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
    int arr[MAX_SIZE];
    int n, i;
    int even_count = 0;
    int odd_count = 0;

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

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);
    return 0;
}