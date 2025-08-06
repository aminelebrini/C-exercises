// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct node{
    char *name;
    int grade;
    struct Node* next;
};

void add_grade(struct node** add){
    struct node* NewNode;
    NewNode = (struct node*)malloc(sizeof(struct node));
    NewNode->name = (char*)malloc(100 * sizeof(char));
    printf("enter name : ");
    scanf("%s",NewNode->name);
    printf("enter grade : ");
    scanf("%d",&NewNode->grade);
    
    if(NewNode->grade >= 10 && NewNode->grade <= 20)
    {
        printf("your name is %s and your grade is %d\n",NewNode->name,NewNode->grade);
    }else{
        printf("invalid input grade");
    }
    
}
int main() {
    
    struct node* students = NULL; 
    for(int i = 0; i < 2; i++)
    {
        add_grade(&students);
    }
    return 0;
}
