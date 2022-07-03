/*   *
     * *
     * * *
     * * * *
     * * * * *       */

    #include<stdio.h>
    int main()
    {
        int n;

        printf("\n Enter the number of steps of pattern you want : ");
        scanf("%d",&n);
        
        printf("\n Stars \n");

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf(" * ");
            }
            printf("\n");
        }
        
        printf("\n Numbers 1 \n");
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf(" %d ",i);
            }
            printf("\n");
        }
     
        printf("\n Numbers 2 \n");
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf(" %d ",j);
            }
            printf("\n");
        }
          
        printf("\n Character \n");

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf(" a ");
            }
            printf("\n");
        }
          
        return 0;
    }