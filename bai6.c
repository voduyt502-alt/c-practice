#include <stdio.h>

int main(void)
{
    double score;
    printf("Enter score (0-10): ");
    scanf("%lf", &score);

    if (score < 0 || score > 10)
    {
        printf("Invalid score\n");
    }
    else if (score >= 8)
    {
        printf("Excellent\n");
    }
    else if (score >= 6.5)
    {
        printf("Good\n");
    }
    else if (score >= 5)
    {
        printf("Average\n");
    }
    else
    {
        printf("Weak\n");
    }

    return 0;
}