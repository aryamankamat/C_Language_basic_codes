#include <stdio.h>
#include <stdlib.h>

float miles(int num)
{
    return (num * 0.62137119);
}

float feet(int num)
{
    return (num * 0.0833333);
}

float Inch(int num)
{
    return (num * 0.393701);
}

float kg(int num)
{
    return (num * 0.45359237);
}

float meter(int num)
{
    return (num * 0.0254);
}

int main()
{
    int ch, num;

    while(1)
    {

        printf("\n 1. KM to Miles \n");
        printf("2. Inches to Feet \n");
        printf("3. CM to Inches \n");
        printf("4. Pounds to KG \n");
        printf("5. Inches to Meters \n");
        printf("6 . Quit \n");

        printf("\n Please Enter you Unit choise : ");
        scanf("%d", &ch);
 
        switch (ch)
        {

        case 1:
            printf("\n Please Enter Number to convert : ");
            scanf("%d", &num);

            printf("\n The Convertion of %d Km is : %f\n", num, miles(num));
            break;

        case 2:
            printf("\n Please Enter Number to convert : ");
            scanf("%d", &num); 

            printf("\n The Convertion of %d Inches to Feet is : %f\n", num, feet(num));
            break;

        case 3:
            printf("\n Please Enter Number to convert : ");
            scanf("%d", &num); 

            printf("\n The Convertion of %d Centimeters to Inches is : %f\n", num, Inch(num));
            break;

        case 4:
            printf("\n Please Enter Number to convert : ");
            scanf("%d", &num); 

            printf("\n The Convertion of %d pounds to KG is : %f\n", num, kg(num));
            break;

        case 5:
            printf("\n Please Enter Number to convert : ");
            scanf("%d", &num);

            printf("\n The Convertion of %dInches to Meter is : %f\n", num, meter(num));
            break;

        case 6:
            printf("\n Quitting the progam ...");
            goto end;
            break;

        default:
            printf("\n Invalid choice...");
            break;
        }
    }

end :

    return 0;
}