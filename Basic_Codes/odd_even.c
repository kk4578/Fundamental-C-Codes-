#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    switch ((n > 0) - (n < 0)) // gives 1 for positive, -1 for negative, 0 for zero
    {
        case 1: printf("Number is positive"); break;
        case -1: printf("Number is negative"); break;
        case 0: printf("Number is zero"); break;
    }
    return 0;
}

