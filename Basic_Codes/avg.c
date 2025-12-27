#include <stdio.h>
int main()
{
    int n,sum;
    printf("Enter the total number to be enterred\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    sum=sum/n;
    printf("Average of numbers = %d\n",sum);
    return 0;
}

