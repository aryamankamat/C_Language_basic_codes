#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Syntax 1 //

    // int a[5];

    // a[0]= 1;
    // a[1] = 22;

    // printf("\n The value at the 0th position is = %d",a[0]);
    // printf("\n The value at the 1th position is = %d",a[1]);



    // Syntax 2 //

    // int a[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\n Enter the value at %d position : ",i);
    //     scanf("%d",&a[i]);
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\n The value at %d is : %d",i,a[i]);
    // }
    

    // Syntax 3 //


    // int a[] = {11,22,13,14,15};

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\n The value at %d is : %d",i,a[i]);
    // }
    

    // Syntax 4 ---> 2D Arrya // 

    // int a[2][3];

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3;j++)
    //     {
    //         printf("\n Enter the value at %d and %d position : ",i,j);        
    //         scanf("%d",&a[i][j]);
    //     }
    // }

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3;j++)
    //     {
    //         printf("%d ", a[i][j]);        
    //     }

    //     printf("\n");
    // }


    // Syntax 5 ---> 2D Arrya //

    int a[2][3] = {{1,2,3},{4,5,6}};
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3;j++)
        {
            printf("%d ", a[i][j]);        
        }

        printf("\n");
    }

    return 0;
}
