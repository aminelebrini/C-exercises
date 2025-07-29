#include <stdio.h>

int main() {
    // Write C code here
    int year;
    printf("enter une annee : ");
    scanf("%d",&year);
    
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("annee bissextile.\n");
    }else{
        printf("n'est pas une annee bissextile.\n");
    }
    

    return 0;
}
