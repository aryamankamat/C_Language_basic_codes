#include<stdio.h>
#include<string.h>

// struct student
// {
//     int id;
//     float marks;
//     char name[10];
// };

typedef struct student 
{
    int id;
    float marks;
    char name[10];
} std; // Using alies name of "structer student" as std.

int main()
{
    // struct student s1;
    
    std s1; // Declaring variable s1 using alies name.

    s1.id = 101;
    s1.marks = 43.5;
    strcpy(s1.name,"Aryaman");

    printf("\n The student details are displayed below : \n");
    printf("The student id is : %d\n",s1.id);
    printf("The student marks is : %f\n",s1.marks);
    printf("The student name is : %s\n",s1.name);
}