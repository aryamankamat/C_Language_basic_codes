#include <stdio.h>

// Method 1 : By declaring arrya as paratmeter in the function.

int func1(int arrya[]) 
{
    for (int i = 0; i < 4; i++)
    {
        printf("\n%d", arrya[i]);
    }
    
    arrya[0] = 111; // Here, the arr is converted into pointers and that's why if we make any changes to arrya values in the fucntion it will be refelected to main function or original arrya.

    return 0;
}

void func2(int *ptr)
{
     for (int i = 0; i < 4; i++)
     {
        printf("\n%d",ptr[i]);
        //  printf("\n%d",*(ptr+i));
     }
     *(ptr + 2) = 111;
}

int main()
{
    int arr[] = {12, 14, 15, 11};

    // printf("\n The value at 0th position is : %d",arr[0]);

    // func1(arr); // By declaring arrya as paratmeter in the function.//
    
    // printf("\n The value at 0th position is : %d",arr[0]); 

    func2(arr);

    func2(arr); // to check the changed value.
    return 0;
}