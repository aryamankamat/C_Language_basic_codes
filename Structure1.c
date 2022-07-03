#include<stdio.h>
#include<string.h>

struct student
{
    int sid;
    float smarks;
    char sname[10];
};  // s1 ;  // We can declare the variables here also. 

// struct student s1; // Declaring the structur variables Globally.

int main()
{
    struct student s1;  // Declaring the structure variables locally.
    
    
    s1.sid = 101;
    // s1.sname = "Aryaman"; // This will through an error because it is an character arrya.
    strcpy(s1.sname,"Aryaman");
    s1.smarks = 60.55;

    printf("\n The ID of student is : %d",s1.sid);
    printf("\n The ID of student is : %s",s1.sname);
    printf("\n The ID of student is : %f",s1.smarks);


    return 0;
}