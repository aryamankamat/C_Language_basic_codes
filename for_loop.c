#include <stdio.h>
int main()
{
    int n;

    printf("\n Enter the number : ");
    scanf("%d", &n);

// Write a program to print n natural numbers.

    // for (int i = 0; i <= n; i++)
    // {
    //     printf("%d\n",i);
    // }

// We can initilize more than 1 variable.

    //   for (int i = 0,j = 0; i <= n; i++)
    //   {
    //        printf("\n%d %d",i,j);
    //   }

// Initilizing is not compulsary .

    // if There variable is initilized already then no need to fill the initilization part of the for loop.

    // int i = 1;

    // for (; i <= n; i++)
    // {
    //     printf("\n%d", i);
    // }

// There can be more than one condition in the condition part.

    // int i = 1, j = 0;
    // for (; j <= 5, i <= n; i++) // Even if there are the two conditons, the for loop will run until the last condition is false.
    // {
    //     printf("%d %d\n", i, j);
    //     j++;
    // }

// We can increment or decrement more than one variable .

    //    for (int i = 0,j = 1; i <= n; i++,j++)
    //    {
    //        printf("%d %d\n",i,j);
    //    }

              // OR //

    //     for (int i = 0,j = 1; i <= n;)
    //    {
    //        printf("%d %d\n",i,j);
    //         i++,j++;
    //    }
                
}