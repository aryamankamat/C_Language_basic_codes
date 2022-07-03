#include <stdio.h>

int sum(int a, int b); // Function prototype : if we want to write function after the main() then we have to declare the function in advance to inform the compiler.

// with argument and without return value.//
void star(int n)
{
   for (int i = 0; i < n; i++)
   {
       printf("%c",'*');
   }
   
}

// Without argument and with return value.//
int accept()
{
    int a;
    printf("\n Enter a numbr : ");
    scanf("%d",&a);

    return a;
}

// Without argument and without return vlaue.//
void addition()
{
   int a , b , ans;
   printf("\n Enter a vlaue for a : ");
   scanf("%d",&a);
   printf("\n Enter the value for b : ");
   scanf("%d",&b);
   
   ans = a+b;
   printf("\n The addtion of two numbr is = %d",ans);
}

int main()
{
    // int a = 10, b = 22;
    //    int c;
    // c = sum(a, b);
    // printf("\n The sum of c is = %d", c);

    // star(7); // Function call.
    
    // c = accept();
    // printf("\n The number given by user is = %d", c);
     
    addition();

    return 0;
}

// With argeument and with return value.//
int sum(int x, int y)
{
    return x + y;
}
