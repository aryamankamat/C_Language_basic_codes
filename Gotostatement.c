#include<stdio.h>

int main()
{

    // Syntax //


    //     lable:
    //        printf("\n We are inside labele.");
    // goto end;
    // printf("\n Hellow world");
    
    // goto lable;

    // end :
    //       printf("\n We are at the end");

   int n;
   
   for (int i = 0; i < 5; i++)
   {
       for (int j = 0; j < 5; j++)
       {
           printf("\n Enter 0 to exit\n");
           printf("\n Enter the number : ");
           scanf("%d",&n);

           if (n == 0)
           {
               goto end;
           }
           
       }
       
   }
   
   end :

    return 0;
}
