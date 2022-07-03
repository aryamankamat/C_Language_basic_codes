#include<stdio.h>
int main()
{
    char ch;
    int n;

    printf("\n Enter the number of steps you want : ");
    scanf("%d",&n);
    getchar(); 
    printf("\n Enter the starting character : ");
    scanf("%c",&ch);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %c ",ch);
        }
        ch++;
        printf("\n");
    }
    
    printf("\n continous ...\n");
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}