#include <stdio.h>
#include <stdbool.h>

int main() {
    // Write C code here
    int a, b;
    int sum = 0;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    sum = a + b;
    if((a == 30 || b == 30) || sum == 30)
    {
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}
