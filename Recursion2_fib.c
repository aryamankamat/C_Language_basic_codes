#include<stdio.h>

int fib(int i)
{
   if (i == 0)
   {
       return 0;
   }
   else if (i == 1)
   {
       return 1;
   }
   else
   {
       return (fib(i-1)+fib(i-2));
   }
}

int main()
{
     int n, i;

     printf("\n Enter the number for fibonnachi series : ");
     scanf("%d",&n);
     printf("\n The fibonnachi series of %d elements is : \n",n);
     for (i = 0; i < n; i++)
     {
         printf("%d\t",fib(i));
     }

}