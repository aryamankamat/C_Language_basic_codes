#include<stdio.h>
#include<string.h>

union student
{
    int id;
    float marks;
    char name[10];
};

int main()
{
   union student s1;

   s1.id = 101;
   s1.marks = 144;
   strcpy(s1.name,"Aryaman");

   printf("\n The studnet id is : %d",s1.id);     // 
   printf("\n The studnet marks is : %d",s1.marks); //  This two values are corrupted because unions use a single shared memory and only 1 member can be accesed at a time.
   printf("\n The studnet name is : %s",s1.name);

   return 0;
}