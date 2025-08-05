// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct Students {
  char name[40];
  int modulesnotes[7];
};

int main() {
    struct Students* student;
    
    int n;
    printf("Enter the number of students whose grades you want to calculate : ");
    scanf("%d",&n);
    
    student = (struct Students*)malloc(n*sizeof(struct Students));
    for(int i = 0; i < n;i++)
    {
        printf("enter student name number %d : ", i+1);
        scanf("%s",student[i].name);
        
            int sum = 0;
            int av = 0;
        for(int j = 1; j < 7;j++)
    {
        printf("enter student module number %d note : ",j);
        scanf("%d", &student[i].modulesnotes[j]);
        sum += student[i].modulesnotes[j];
        av = sum / 7;
    }
    
    printf("%s your grade is : %d\n",student[i].name,av);
    }
    
    
    return 0;
}
