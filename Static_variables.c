#include <stdio.h>
// Address of the a inside func1() and main() is different because the value is copied from actucal parameter to formal parameter.  

int a = 344; // Gloable variable.

int func1(int a1)
{
     static int var = 0;
     printf("\n The value of var is %d",var);
     var++;
    // printf("\n The value of a inside func1 is %d", a1);
    // printf("The address of a inside func1 is %d\n", &b);
    return a1 + var;
}

int main()
{
    int a = 34; // local varibale.

    int val = func1(a);
    val = func1(a);   // var is incremented by 1 befor this call was made.

    // printf("\n The address of a inside main is %d",&a);
    // printf("\n The value of func1 is %d", val);

    return 0;
}