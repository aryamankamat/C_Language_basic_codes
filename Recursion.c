#include<stdio.h>

int fact(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * fact(num - 1));
    }
}

int main()
{
    int n;
    printf("\n Enter the number for factoral  : ");
    scanf("%d",&n);
    printf("\n The factoral of %d is %d",n,fact(n));
}