#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    
    int units = n % 10;
    int tens = (n % 100) / 10;
    int hundreds = n / 100;
    
    int res = units + tens + hundreds;
    printf("%d\n",res);

    return 0;
}