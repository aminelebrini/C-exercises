#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *command;
    printf("enter command : ");
    scanf("%s",command);
    int x = system(command);
    printf(x);
}
