#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
int countNodes(struct Node* head){
    struct Node* len = head;
    int count = 0;
    while(len != NULL)
    {
        count++;
        len = len->next;
    }
    printf("the number of node is : %d\n",count);
}
void printlist(struct Node* end){
    struct Node* previous = end;
    while(previous != NULL)
    {
        printf("%d -> ",previous->data);
        previous = previous->next;
    }
    printf("...");
}
int main() {
    
    struct Node* first;
    struct Node* second;
    struct Node* end;

    first = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    end = malloc(sizeof(struct Node));
    end->data = 10;
    end->next = second;
    
    second->data = 20;
    second->next = first;
    
    first->data = 30;
    first->next = NULL;
    
    countNodes(end);
    printlist(end);
    return 0;
}
