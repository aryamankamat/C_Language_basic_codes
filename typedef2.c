#include<stdio.h>
int main()
{
   
//    int* a,b; 
   int c = 44;
   
//    a = &c;
// b = &c; // This will give an error because pointer is declared only for a not for b.  
    
    // To avoid this error //

    typedef int* intpointer; // declaring "integer pointer" with alies name "intpointer".

    intpointer a , b;  // declaring the variables with the alies name.
     a = &c;
     b = &c;
     
     printf("\n The value at a : %d",a);
     printf("\n The value at b : %d",b);


    return 0;
}