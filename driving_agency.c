#include<stdio.h>
#include<stdlib.h>

typedef struct drivers
{
    char name[10];
    char dl[10];
    char route[10];
    int kms;
} dr;

int main()
{
    dr d1,d2,d3;

    printf("\n Enter the drivers 1st details below : \n");

    printf("\n Enter the name of the first briver : ");
    scanf("%s",&d1.name);
    
    printf("\n Enter the dl number of the first briver : ");
    scanf("%s",&d1.dl);

    printf("\n Enter the route of the first briver : ");
    scanf("%s",&d1.route);

    printf("\n Enter the kelometers of the first briver : ");
    scanf("%d",&d1.kms);

    printf("\n Enter the drivers 2nd details below : \n");

    printf("\n Enter the name of the second briver : ");
    scanf("%s",&d2.name);
    
    printf("\n Enter the dl number of the second briver : ");
    scanf("%s",&d2.dl);

    printf("\n Enter the route of the second briver : ");
    scanf("%s",&d2.route);

    printf("\n Enter the kelometers of the second briver : ");
    scanf("%d",&d2.kms);

    printf("\n Enter the drivers 3rd details below : \n");

    printf("\n Enter the name of the third briver : ");
    scanf("%s",&d3.name);
    
    printf("\n Enter the dl number of the third briver : ");
    scanf("%s",&d3.dl);

    printf("\n Enter the route of the third briver : ");
    scanf("%s",&d3.route);

    printf("\n Enter the kelometers of the third briver : ");
    scanf("%d",&d3.kms);

    printf("\n The drivers details are displayed below ....\n ");

    printf("\n The name of the 1st driver is : %s",d1.name);
    printf("\n The ld number of the 1st driver is : %s",d1.dl);
    printf("\n The route of the 1st driver is : %s",d1.route);
    printf("\n The kilometers of the 1st driver is : %d\n",d1.kms);

    printf("\n The name of the 2nd driver is : %s",d2.name);
    printf("\n The ld number of the 2nd driver is : %s",d2.dl);
    printf("\n The route of the 2nd driver is : %s",d2.route);
    printf("\n The kilometers of the 2nd driver is : %d\n",d2.kms);

    printf("\n The name of the 3rd driver is : %s",d3.name);
    printf("\n The ld number of the 3rd driver is : %s",d3.dl);
    printf("\n The route of the 3rd driver is : %s",d3.route);
    printf("\n The kilometers of the 3rd driver is : %d",d3.kms);

    return 0;
}