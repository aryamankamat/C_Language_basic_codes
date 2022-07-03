#include<stdio.h>

void changevalue(int *a,int *b)
{
       int x , y;

      x = *a;
      y = *b;

      *a = *a + *b;
      *b = x - y;


      return;
}

int main()
{
    int a = 5 , b = 7;

    printf("\n The Original values of a and b are : \n");

    printf("\nThe value of a is : %d",a); 
    printf("\n The value of b is : %d\n",b);

    changevalue(&a,&b);
     
    printf("\n The vlaue after addition and suntraction : \n");

    printf("\nThe value of a is = %d",a);
    printf("\n The value of b is = %d",b);

    return 0;
}