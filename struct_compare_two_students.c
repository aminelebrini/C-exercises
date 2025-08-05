#include <stdio.h>
#include <stdlib.h>

struct students{
    char name[20];
    int grade;
};
int compareGrades(int grade1, int grade2)
{
    if(grade1 > grade2)
    {
        printf("///student 1 is the best///");
    }else{
         printf("///student 2 is the best///");
    }
}
int main() {
    
  struct students* stu;
  
  stu = (struct students*)malloc(2 * sizeof(struct students));
  
  for(int i = 0; i < 2; i++)
  {
      printf("enter the student n%d name: ",i+1);
      scanf("%s",stu[i].name);
      printf("enter the student n%d grade: ",i+1);
      scanf("%d",&stu[i].grade);
  }
  
     compareGrades(stu[0].grade, stu[1].grade);
  
    return 0;
}
