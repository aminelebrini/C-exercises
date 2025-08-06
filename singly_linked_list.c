#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char *name;
    struct student* link;
};

struct student* add_beg(struct student* head, char *name)
{
    struct student* new_node = malloc(sizeof(struct student));
    new_node->name = malloc(strlen(name)+1);
    strcpy(new_node->name,name);
    new_node->link = head;
    
    return new_node;
}
void printList(struct student* head) {
    struct student* ptr = head;
    while(ptr != NULL) {
        printf("Name: %s\n", ptr->name);
        ptr = ptr->link;
    }
}
int main() {
    
    struct student* head = NULL;
    
    head = add_beg(head,"AUDI");
        printList(head);

    return 0;
}
