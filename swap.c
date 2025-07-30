// Online C compiler to run C program online
#include <stdio.h>
int swap(int *a,int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
    
   printf("a = %d\n", *a);
   printf("b = %d\n", *b);
}
int main() {
    int a = 4;
    int b = 5;
    swap(&a,&b);
        
        return 0;
    }
