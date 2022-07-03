#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;

    // printf("\n The address value present in ptr is %p",ptr); // Contains Address of a.
    // printf("\n The address of a is %p",&a); // Contains Address of a.

    // printf("\n The value of ptr is %d",*ptr); // Dereferncing ptr to print the value of a Indirectly.
    // printf("\n The value of a is : %d",a); // Value of a Directly.

    // printf("\n The address of ptr is %p",&ptr); // Address of ptr.

    // WE can use %p specifier to print the value of pointer.//

    // int *ptr1;
    // printf("\n The address of a garbege is : %p",ptr1);    // Returns a Grabage value.
    // int *ptr1 = NULL;
    // printf("\n The address of ptr1 is : %p",ptr1);            // Return a Null value.

    //----------------------- Pointer Arithmatic ----------------------//

    // printf("%d\n", ptr);

    //  printf("%d\n",ptr + 1); // ptr is of type int , sizeof(int) wlll be added to the ptr which is 4bytes according to th architecture.
    //  printf("%d\n",ptr - 1); // sizeof(int) will be subtracted , 4bytes.

    //  ptr++;
    //  printf("%d\n",ptr);

    // ptr--;
    // printf("%d\n", ptr);

    //===================== Arrys and Pointers ===================//

    int arr[] = {1,2,3,4,5};

    // printf("\n The element at position 0 is : %d",arr[0]);

    // Both the methods print the same address. 
    // printf("\n The address of element at position 0 is : %d",&arr[0]); 
    // printf("\n The address of arrya is : %d",arr);
    
    // printf("\n The element at position 1 is : %d",arr[1]);

    // Both the methods print the same address , In case of pointers, if we add any value, it will add the of the datatype to the memory. 
    // printf("\n The address of element at position 1 is : %d",&arr[1]);
    // printf("\n The address of element at position 1 is : %d",arr + 1);
    
    // Dereferncing 
    // printf("\n The element at position 0 is : %d",*(arr));
    // printf("\n The element at position 0 is : %d", *(&arr[0]));
    // printf("\n The element at position 1 is : %d",*(arr + 1));

    // arr++;  // arr is an constant, so this line will throw an error. BUT ...

    // int *arryaptr =  arr;
    // arryaptr++; // this an an valid statement because we cannot make changes in original arrya.

    return 0;
}