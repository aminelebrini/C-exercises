#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main() {
    // Write C code here
    int a;
    int sum = 0;
    printf("enter a : ");
    scanf("%d",&a);
    
    if((abs(a - 100) <= 10) || abs(a - 200) <= 10)
    {
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}
