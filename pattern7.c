/*   5 5 5 5 5 
     5 5 5 5 
     5 5 5 
     5 5 
     5          */

     #include<stdio.h>
     int main()
     {
         int n;

         printf("\n Enter the number of rows : ");
         scanf("%d",&n);
         
         for (int i = n; i >= 1; i--)
         {
             for (int j = 1; j <= i; j++)
             {
                 printf(" * ");
             }
             printf("\n");
         }
         

         printf("\n Numbers 1 ...\n");

          for (int i = n; i >= 1; i--)
         {
             for (int j = 1; j <= i; j++)
             {
                 printf(" %d ",i);
             }
             printf("\n");
         }

         printf("\n Number 2 ...\n");

          for (int i = n; i >= 1; i--)
         {
             for (int j = 1; j <= i; j++)
             {
                 printf(" %d ",j);
             }
             printf("\n");
         }


     }