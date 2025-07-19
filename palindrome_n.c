#include <stdio.h>
int main() {
    
    int n /*= enter any number*/, reverse = 0, remainder = 0;
    
    while(n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    printf("%d",reverse);
    return 0;
}
