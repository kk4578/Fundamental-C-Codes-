#include<stdio.h>
int main()
{
    int a,b,c;
    int temp;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        temp = a;
        if(a<c)
        temp=c;
        }
    else
    {
        temp=b;
        if(b<c)
        temp=c;
    }
    printf("largest number is %d",temp);
    return 0;
}

