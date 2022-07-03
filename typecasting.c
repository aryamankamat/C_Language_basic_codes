#include<stdio.h>
int main()
{
    // There are two types of typecasting in C : 

    // 1 . Implicit conversion , also called as type co version which is done by the compiler.

    // int x = 10;    // integer x
    // char y = 'a';  // character c
  
    // // y implicitly converted to int.
    // // value of 'a' is 97
    // x = x + y;
     
    // // x is implicitly converted to float
    // float z = x + 1.0;
  
    // printf("x = %d\n", x);
    // printf("z = %f\n",z);

    
    // 2 . Explicit conversion, which is user defined conversion.

        int a = 3;
        float b = 54;
        

        // printf("\n The value of a = %d",a);
        //  printf("\n The value of b = %d",(int)b); // float value is typecasted to integer.
        
        // float c = 54/5;
        // printf("\n The value of c is = %f",c); // The operation between an int & int will give int output.

        float c = (float)54/5;  // Converting 1 operand to float to get output in float.
        printf("\n The vlue of c after typing casting = %f",c);

}