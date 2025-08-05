#include <stdio.h>
#include <stdlib.h>
struct date{
  int day;
  int month;
  int year;
};

struct employee{
    char name[20];
    struct date hir_date;
};
int main() {
    
    struct employee* emp;
    
    emp = (struct employee*)malloc(2 * sizeof(struct employee));
    
    for(int i = 0; i< 2; i++)
    {
        printf("enter the employee name : ");
        scanf("%s",emp[i].name);
        printf("enter the day : ");
        scanf("%d",&emp[i].hir_date.day);
        printf("enter the month : ");
        scanf("%d",&emp[i].hir_date.month);
        printf("enter the year : ");
        scanf("%d",&emp[i].hir_date.year);
    }
    for(int i = 0; i < 2;i++)
    {
        printf("your name is %s and your hiring date is : %d-%d-%d\n",emp[i].name,emp[i].hir_date.day,emp[i].hir_date.month,emp[i].hir_date.year);

    }

    return 0;
}
