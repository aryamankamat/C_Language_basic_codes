#include<stdio.h>

void Pstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c",str[i]);

        i++;
    }
    
    return ;
}

int main()
{
    // char str[] = {'A','R','Y','A','M','A','N','\0'}; // AMethod 1 to declare any string or character arrya.

    // char str[] = "Aryaman"; // Method 2 , to declare any string or character arrya.


    char str[20];

    printf("\n Enter the string : ");
    gets(str); // accepting input.

    printf("\n Printing using printf() function : %s\n",str);
    printf("\n Printing using puts() function : \n");
    puts(str); // printing with puts() function.

    printf("\n Printing using user-derfined function : \n");
    Pstr(str); 

    return 0;
}