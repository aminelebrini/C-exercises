#include <stdio.h>

int main() {
    // Write C code here
    int a, b;
    int sum = 0;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);

       sum = a + b; 
    if(a == b)
    {
        sum *= 3;
        printf("%d", sum);
    }
    else{
        printf("%d", sum);
    }
    return 0;
}
