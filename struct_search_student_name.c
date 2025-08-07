#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    char *name;
    struct Node* next;
};

void search_name(struct Node* student,char *seachname)
{
    int found = 0;
    for(int i = 0; i < 2;i++)
    {
        if(strcmp(student[i].name, seachname)== 0)
        {
            printf("The student is present");
            found = 1;
            break;
        }
    }
    
    if(!found)
    {
        printf("Student is not present");
    }
}
int main() {
   struct Node* head = NULL;
   struct Node* student;
   
   student = (struct Node*)malloc(2*sizeof(struct Node));

   for(int i = 0; i < 2;i++)
   {
       student[i].name = (char *)malloc(100*sizeof(char));
       printf("enter the sudent number %d : ", i+1);
       scanf("%s",student[i].name);
   }
   char search[100];
 
       printf("////->enter the name of student : ");
       scanf("%s",search);
       
       search_name(student,search);
    return 0;
    
}
