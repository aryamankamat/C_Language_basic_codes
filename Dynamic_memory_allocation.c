#include <stdio.h>
#include<stdlib.h>

int main()
{
    // Use of malloc()

    // int * ptr;
    // int n;
    
    // printf("\n please enter the size of arrya : ");
    // scanf("%d",&n);

    // ptr = (int *)malloc(n * sizeof(int));

    // for (int i = 0; i < n; i++)
    // {
    //     printf("\n Enter the vlaue at %d position : ",i);
    //     scanf("%d",&ptr[i]);
    // }

    // printf("\n The Arrya elements are displayed below : \n");

    // for (int i = 0; i < n; i++)
    // {
    //     printf("\n The vlaue at %d position is  : %d ",i,ptr[i]);
    // }
    
    //Use of calloc()

    int * ptr;
    int n;
    
    printf("\n please enter the size of arrya : ");
    scanf("%d",&n);
    
    ptr = (int *)calloc(n , sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("\n Enter the vlaue at %d position : ",i);
        scanf("%d",&ptr[i]);
    }

    printf("\n The Arrya elements are displayed below : \n");

    for (int i = 0; i < n; i++)
    {
        printf("\n The vlaue at %d position is  : %d ",i,ptr[i]);
    }
    
    // Use of realloc()

    printf("\n please enter the size of New arrya : ");
    scanf("%d",&n);
    
    ptr = (int *)realloc(ptr , n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("\n Enter the new vlaue at %d position : ",i);
        scanf("%d",&ptr[i]);
    }

    printf("\n The New Arrya elements are displayed below : \n");

    for (int i = 0; i < n; i++)
    {
        printf("\n The value at %d position is  : %d ",i,ptr[i]);
    }
     
    free(ptr); // freeing the memory.

    return 0;
}