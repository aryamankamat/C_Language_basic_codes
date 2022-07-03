#include <stdio.h>
#include <string.h>

void parser(char *str)
{
    int in = 0; // Variable to check whether we are inside the tag.
    int index = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            in = 0;
            continue;
        }

        if (in == 0)
        {
            str[index] = str[i];
            index++;
        }
    }
    str[index] = '\0';

    // Removing the Trailing spaces from beginning //

    while (str[0] == ' ')
    {
        // shift the string to the left //
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i+1];
        }
        
    }
    
    // Removing the Trailing spaces from beginning //

    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';
    }
    
}

int main()
{

    char str[] = "<h1>        This is an Heading     </h1>";

    parser(str);

    printf("\n The parsed string is ~~%s~~", str);

    return 0;
}