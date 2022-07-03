/*  a
    a b
    a b c
    a b c d
    a b c d e  */

    #include<stdio.h>
    int main()
    {
        char ch;
        int n;

        printf("\n Enter the number of rows you want : ");
        scanf("%d",&n);
        
        getchar();

        printf("\n Enter the starting character : ");
        scanf("%c",&ch);

        for (int i = 1; i <= n; i++)
        {
            ch = 'a';

            for (int j = 1; j <= i; j++)
            {
                printf(" %c ",ch);
                ch++;
            }
            printf("\n");
        }
        
    }