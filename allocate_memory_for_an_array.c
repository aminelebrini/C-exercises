#include <stdio.h>
#include <stdlib.h>
int main() {
    
    int *arr;
    int size;
    printf("enter the size of number : ");
    scanf("%d",&size);
    
    arr = (int *)malloc(size * sizeof(int));
    for(int i = 0; i < size; i++)
    {
        printf("enter numbers up to 3 numbers : ");
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < size; i++)
    {
            printf("%p\n",&arr[i]);

    }
    free(arr);
    
    return 0;
}
