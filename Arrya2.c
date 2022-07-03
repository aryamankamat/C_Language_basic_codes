#include<stdio.h>

int main()
{
    int n,ch;
    int a[10];

    printf("\n Enter the size of an arrya : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("\n Enter the value at %dth position : ",i);
        scanf("%d",&a[i]);
    }

    while (1)       
    {
        printf("\n 1. Display all even numbers .\n");
        printf("\n 2. Display all odd numbers .\n");
        printf("\n 3. Display all even and odd numbers .\n");
        printf("\n 4. Enter 4 to quit .");

        printf("\n Please Enter your choice : ");
        scanf("%d",&ch);

        switch (ch)
        {

        case  1:
                  printf("\nThe even numbers are : \n");

                  for (int i = 0; i < n; i++)
                  {
                      if (a[i] % 2 == 0)
                      {
                           printf("%d ",a[i]);   
                      }
                      printf(" ");
                  }
                    
                   break;
        
        case  2:
                  printf("\nThe odd numbers are : \n");

                  for (int i = 0; i < n; i++)
                  {
                      if (a[i] % 2 != 0)
                      {
                           printf("%d ",a[i]);   
                      }
                      printf("\n");
                  }
                    
                   break;
        
        case  3:
                  printf("\nThe even and odd numbers are : \n");

                  for (int i = 0; i < n; i++)
                  {
                      if (a[i] % 2 == 0)
                      {
                           printf("The even number is  : %d ",a[i]);   
                      }
                      else
                      {
                          printf("The odd number is : %d",a[i]);
                      } 
                      printf("\n");
                  }
                    
                   break;
        
        case   4: 
                   printf("\n Quitting the program ...");
                   goto end;
                   break;

        default :
                   printf("\n Invalid choice...");
                   break;
        }
    }
    
    end :
    return 0;
}