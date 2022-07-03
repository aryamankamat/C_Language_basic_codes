#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chars, i = 0;
    char *ptr;

    while (i < 3)
    {
        printf("\n Employee : %d Enter the size of employee ID : ",i+1);
        scanf("%d",&chars);
        ptr = (char *) malloc((chars+1)*sizeof(char)); // (chars+1) is extra space for the '\0'(null) character.
        printf("\n Enter the employee ID : ");
        scanf("%s", ptr);
        printf("\n your employee Id is : %s\n", ptr);
        free(ptr);
        i = i + 1;
    }
    
    return 0;
}