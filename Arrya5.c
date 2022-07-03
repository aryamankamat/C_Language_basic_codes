#include<stdio.h>

int main()
{
    int n,a[10],newnum , flag = 0,i;

    printf("\n Enter the size of an arrya : ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        printf("\n Enter the value at %d position : ",i);
        scanf("%d",&a[i]);
    }

    printf("\n Please enter the value you want to search : ");
    scanf("%d",&newnum);

    for (i = 0; i < n; i++)
    {
        if (newnum == a[i])
        {
            flag = 1;
        }
    }
    
    if (flag = 1)
    {
        printf("\n The Number Found ...");
    }
    else
    {
        printf("\n The Number Not Found ...");
    }
    
    return 0;
}