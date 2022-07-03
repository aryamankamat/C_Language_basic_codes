#include<stdio.h>
int main()
{
    int age,marks;

    printf("\n Please enter your age : ");
    scanf("%d",&age);

    printf("\n Enter your marks : ");
    scanf("%d",&marks);

    switch (age)
    {
    case 3:
            printf("\n Your age is 3");
            switch (marks)
            {
            case 45:
                      printf("\n Your marks are 45");
                      break;
            
            default:
                      printf("\n your age is not 45"); 
                      break;
            }
            break;
    
    case 21:
            printf("\n Your age is 21");
            break;

    case 28:
            printf("\n Your age is 28");
            break;

    default:
            printf("\n Your age is not 3, 21,28");
            break;
    }
}