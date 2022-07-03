#include<stdio.h>

int main()
{
    int n , a[10];

    printf("\n Enter the size of an arrya : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("\n Enter the value at %d position : ",i);
        scanf("%d",&a[i]);
    }

    printf("\n The Arrya elements displayed in reverse order : \n");

    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
   
   return 0;
}