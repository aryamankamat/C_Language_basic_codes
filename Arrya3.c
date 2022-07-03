#include<stdio.h>

int main()
{
    int n, ch , a[10] , Pcount = 0,Ncount = 0 , Esum = 0,Osum = 0,Psum = 0,Nsum = 0;
    

    printf("\n Please enter the size of an arrya : ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("\n Enter the value at %d position : ",i);
        scanf("%d",&a[i]);
    }

    while (1)
    {
        printf("\n 1 . Display arrya elements.\n");
        printf("\n 2 . Display count of all even and odd elements.\n");
        printf("\n 3 . Display Positive and Negative elements.\n");
        printf("\n 4 . Display Sum of Even and Odd Numbers.\n");
        printf("\n 5 . Display Sum of all Positive and Negative Numbers.\n");
        printf("\n 6 . Press 6 to Quit.\n");

        printf("\n Please enter you choice : \n");
        scanf("%d",&ch);

        switch (ch)
        {

        case 1:
                   printf("\n The Arrya elements are displayed below...\n"); 

                   for (int i = 0; i < n; i++)
                   {
                       printf("%d ",a[i]);
                   }
                   
                   break;
        
        case 2:
                   printf("\n The count of Positive and Negative elements are displayed below...\n"); 

                   for (int i = 0; i < n; i++)
                   {
                       if (a[i] > 0)
                       {
                           Pcount++;
                       }
                       else
                       {
                           Ncount++;
                       }
                   }
                   printf("\n The count of positive elemets are : %d",Pcount);
                   printf("\n The count of Negative count is : %d",Ncount);
                   
                   break;

        case 3:
                   printf("\n The Positive and Negative elements are displayed below...\n"); 

                   for (int i = 0; i < n; i++)
                   {
                       if (a[i] > 0)
                       {
                           printf("The element is Positive : %d\n",a[i]);
                       }
                       else
                       {
                           printf("\n The elemet is Negative : %d\n",a[i]);
                       }
                   }
                   
                   break;

        
        case 4:
                   printf("\n The Sum of even and odd elements are displayed below...\n"); 

                   for (int i = 0; i < n; i++)
                   {
                       if (a[i] % 2 == 0)
                       {
                           Esum = Esum + a[i];
                       }
                       else
                       {
                           Osum = Osum + a[i];
                       }
                   }
                   printf("\n The Sum of Even number is : %d",Esum);
                   printf("\n The sum of Odd numbers are : %d",Osum);
                   break; 

        case 5:
                   printf("\n The Sum of Positive and Negative elements are displayed below...\n"); 

                   for (int i = 0; i < n; i++)
                   {
                       if (a[i] > 0)
                       {
                           Psum = Psum + a[i];
                       }
                       else
                       {
                           Nsum = Nsum + a[i];
                       }
                   }
                   printf("\n The Sum of positive elements are : %d",Psum);
                   printf("\n The Sum of Negtive number is : %d",Nsum);
                   break;           

        case 6:
                   printf("\n Quitting the program ...");
                   goto end;
                   break;

        default:
                  printf("\n Invalid choice...");
                  break;
        }
    }
    
    end:
}