#include <stdio.h>
int main() {
    int a[] = {1,2,3};
    int b[3] = {1,2};
    
    int i = 0;
    int size = sizeof(b) / sizeof(b[0]);
   for(i = 0 ; i < size; i++)
    {
        b[i] = a[i];
        printf("%d",b[i]);
    }
        
    }
