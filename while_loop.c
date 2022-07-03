#include<stdio.h>
int main()
{
    int n , i;

    // printf("\n Enter the number : ");
    // scanf("%d",&n);

// Write a program to print n naturnal numbers using while loop.

    // while (i<=n)
    // {
    //     printf("\n%d",i);
    //     i++;
    // }
    
// write a program in c to print a multiplication table using while loop.

    printf("\n Enter a number for printing a table : ");
    scanf("%d",&n); 

    while (i<=10)
    {
        printf("%d X %d = %d\n",n,i,(n*i));
        i++;
    }
    
}