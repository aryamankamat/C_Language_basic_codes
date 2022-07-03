#include<stdio.h>
int main()
{
    char ch;
    
    printf("\n Enter the character you want to print : ");
    scanf("%c",&ch);

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" %c ",ch);
        }
        printf("\n");
    }
    
}