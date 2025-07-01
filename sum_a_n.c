// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a;
    int sum = 0;
    printf("enter un nombre pour calculer la somme de 1 a n : ");
    scanf("%d",&a);
    
    for(int i = 1; i<= a;i++)
    {
        sum += i;
    }
    printf("la somme de 1 a %d est %d\n",a,sum);
    return 0;
}