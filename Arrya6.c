#include <stdio.h>

int main()
{
    int a[100][100], row, col;
    int Esum = 0, Osum = 0, sum = 0;

    printf("\n Enter the size of rows : ");
    scanf("%d", &row);

    printf("\n Enter the size of columns : ");
    scanf("%d", &col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\n Enter values at %d and %d position : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n The 2D arrya Matrix is displayed below : \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n The Even and Odd Numbers are displayed below ...\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                printf("The even numbers is : %d\n", a[i][j]);
            }
            else
            {
                printf("The odd numbers is : %d\n", a[i][j]);
            }
        }
        printf("\n");
    }

    printf("\n The Sum of all even and odd numbers are displayed below ...\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                Esum = Esum + a[i][j];
            }
            else
            {
                Osum = Osum + a[i][j];
            }
        }
        printf("\n");
    }
    printf("\n The Sum of Even numbers are : %d", Esum);
    printf("\n The Sum of Odd numbers are : %d", Osum);

    printf("\n The sum of all elements are displayed below ..\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = sum + a[i][j];
        }
        printf("\n");
    }

    printf("\n The sum of all elements are = %d",sum);
}