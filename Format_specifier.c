#include<stdio.h>
int main()
{
    float a = 7.333;

    printf("%.4f\n",a); // print a with accuracy of 4 decimal points.
    printf("%6.4f\n",a); //no change, because a has 6 character value in it.
    printf("%8.4f\n",a); // leaving 2 character space in fornt and then printing the value.
    printf("%-10.4f check the space\n",a); // leaving 4 character space after printing the value. 
}