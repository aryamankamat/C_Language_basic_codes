#include<stdio.h>

void swap(int *a , int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    return;
}

int main()
{
    int a , b;

    printf("\n Enter the value for a : ");
    scanf("%d",&a);
    printf("\n Enter the value for b : ");
    scanf("%d",&b);
     
    printf("\n The values before swapping are : \n");
    printf("\n The value of a is  : %d",a);
    printf("\n The value of b is : %d",b); 

    swap(&a,&b);

    printf("\n The values After swapping are : \n");
    printf("\n The value of a is  : %d",a);
    printf("\n The value of b is : %d",b); 

    return 0;
}