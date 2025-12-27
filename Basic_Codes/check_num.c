#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n==0)
    {
        printf("Number is 0");
    }
    if(n>0)
    {
        printf("Number is positive");   
    }
    else
    {
        printf("Number is negative");
    }
    return 0;
}

