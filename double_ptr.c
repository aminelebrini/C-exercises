#include <stdio.h>

void doubleptr(int *b)
{
    *b *= 2;
}
int main() {
    int n = 21;
    int *p = &n;
    
    doubleptr(p);
    
    printf("%d",*p);
    

    return 0;
}
