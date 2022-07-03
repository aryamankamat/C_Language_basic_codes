#include<stdio.h>
#include<stdlib.h> 
#include<string.h> // To implement string functions we need to use <string.h> header file.

int main()
{ 
    
    // char s1[] = "Hi";
    // char s2[] = "Aryaman";

    // printf("\n The concatination of two strings is displayed below : \n");
    // puts(strcat(s1,s2));

    // printf("\n The length of s1 is : %d",strlen(s1));
    // printf("\n The length of s2 is : %d",strlen(s2));
    
    // printf("\n The reverse of string s1 is displayed below : \n");
    // puts(strrev(s1));
    // printf("\n The reverse of string s2 is displayed below : \n");
    // puts(strrev(s2));

    // char s3[20]; 

    // s3 = strcat(s1,s2);  // this will give an erro because s3 is an character arrya and assinment is not allowed.

    // puts(strcpy(s3,strcat(s1,s2))); // The string got coped in s3.

    //    or 

    // strcpy(s3,strcat(s1,s2));
    // puts(s3);

    // printf("\n The difference of string s1 and s2 is : %d",strcmp(s1,s2));

    //  1 -> first charcter of s1 is greater than s2.
    //  0 -> Both the string are same.
    // -1 -> First character of s1 is smaller than s2.


    // -------------------Quize--------------------------//

    char str1[] = "Aryaman";
    char str2[] = "Kamat";
    char str3[] = "is Friend of";
    

    // printf("\n %s is Friend of %s\n",str1,str2);

    printf("\n The concatination of str1 , str2 , str3 is displayed below : \n");

    puts(strcat(strcat(str1,str3),str2));
    
    
    return 0;
}