#include<stdio.h>
int main()
{
    char Pmath , Pscience;
    
    printf("\nPlease write 'Y' for pass and 'N' for fail in maths and science .\n");
    
    printf("\n Have you passed in Math exam : ");
    scanf("%c",&Pmath);
    getchar();
    printf("\n Have you passed in Science exam : ");
    scanf("%c",&Pscience);
    
    if ((Pmath == 'Y')&&(Pscience == 'Y'))
    {
        printf("\n Congratulations , You recive a gift worth of 45 rupees.\n");
    }
    else if ((Pmath == 'Y') && (Pscience == 'N'))
    {
        printf("\n As you have passed only in math exam, you get a gift worth of 15 rupees.\n");
    }
    else if ((Pmath == 'N')&&(Pscience == 'Y'))
    {
        printf("\n As you have passed only in Science exam, you get a gift worth of 15 rupees.\n");
    }
    else
    {
        printf("\n Sorry, No giftes for failed\n");
    }
    
    return 0;
}