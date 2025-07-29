// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a, b;
    int diff = 0;
    printf("enter a : ");
    scanf("%d",&a);

    if(a > 51)
    {
        diff = (a - 51) * 3;
        printf("%d", diff);
    }
    else{
        printf("%d", 51 - a);
    }
    return 0;
}
