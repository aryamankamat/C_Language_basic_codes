/*    *  *  *
      *  *  *  
      *  *  *     */


     #include<stdio.h>
     int main()
     {
         printf("\n Stars \n");

         for (int i = 1; i <= 3; i++)
         {
             for (int j = 1; j <= 3; j++)
             {
                 printf(" * ");
             }
             printf("\n");
         }

         printf("\n Numbers 1 \n");

         for (int i = 1; i <= 3; i++)
         {
             for (int j = 1; j <= 3; j++)
             {
                 printf(" %d ",i);
             }
             printf("\n");
         }

          printf("\n Numbers 2 \n");

         for (int i = 1; i <= 3; i++)
         {
             for (int j = 1; j <= 3; j++)
             {
                 printf(" %d ",j);
             }
             printf("\n");
         }
   
        printf("\n Character \n");

         for (int i = 1; i <= 3; i++)
         {
             for (int j = 1; j <= 3; j++)
             {
                 printf(" a ");
             }
             printf("\n");
         } 
        return 0;
     }