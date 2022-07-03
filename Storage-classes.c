#include <stdio.h>
#include<stdlib.h>

// int sum = 100;

int func1(int a,int b)
{
//    auto int sum; // auto class 
//    sum = a+b;
    // extern int sum; // Extern infroms the compiler to use the global varibale.

    static int myvar; // this will frize a varibale in the memory till the end of the function.
    myvar++;
    printf("\n The myvar is = %d",myvar);
    // return sum;
    return myvar;
}

int main()
{
    // Declaration - Tellin the compiler about the varibale.(No space is reserved).
    // Definition - Declaration + space reservation.
    
    // int sum = func1(3,5);

    // printf("\n The sum is = %d",sum);
   
    //  int myvar;

    // register int myvar; // register storage class.

     myvar = func1(4,5);
      myvar = func1(4,5);
       myvar = func1(4,5);
    return 0;
}