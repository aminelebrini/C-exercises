#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int age;
    char *name;
} students;
int main() {
    
    students* a;
    int n;
    printf("enter the number of students : ");
    scanf("%d",&n);
    a = (students*)malloc(n * sizeof(students)); 
    
    
    for(int i = 0; i < n; i++)
    {
        a[i].name = (char*)malloc(100*sizeof(char));
        printf("enter the name of sudent number %d : ", i+1);
        scanf("%s",a[i].name);
        printf("enter the age of sudent number %d : ", i+1);
        scanf("%d",&a[i].age);
    }
    for(int i = 0; i < n; i++)
    {
        printf("%s ",a[i].name);
        printf("%d ",a[i].age);
        printf("\n");
    }
    return 0;
}
