#include<stdio.h>

// Method 2 to declare a constant using "# define" pre-processor.
#define PI 3.14

int main()
{
    // Method 1 to declare a constant using "const" keyword.

    // const float pi = 3.14;
    int r;
    float area;

    printf("\n Enter the vlaue of r : ");
    scanf("%d",&r);

    area = PI * r * r;
    printf("\n The area of a circle is : %f",area); 

    return 0;
}