#include<stdio.h>
int main()
{
    // for(int i = 0;i<=10;i++)
    // {
    //     printf("\n%d",i);

    //      if (i == 5)
    //      {
    //         break;
    //      }
         
    // }
     
     int age;
     
    for (int i = 0; i < 10; i++)
    {
        printf("\n Enter your age : ");
        scanf("%d",&age);
        if (age > 10)
        {
            break;
        }
    }
    
}