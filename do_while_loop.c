#include<stdio.h>
int main()
{
    //write a program in c to print a multiplication table for a number using do-while .
    
    int n,i=1;

    printf("\n Enter the number for the table : ");
    scanf("%d",&n);
     
    // do
    // {
    //    printf("%d\n",i+1);
    //    i++;
    // } while (i<n);

    do
    {
        printf("%d X %d = %d\n",n,i,(n*i));
        i++;
    } while (i<=10);
    
}