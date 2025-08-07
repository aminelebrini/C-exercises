#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
void add_end(struct Node* head, int value)
{
    struct Node* newNode = malloc(sizeof(struct  Node));
    newNode->data = value;
    newNode->next = NULL;
    
    struct Node* current = head;
    while(current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
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
    
    add_end(end,40);
    printlist(end);
    return 0;
}
