#include <stdio.h>

int main() {

    int a = 2;
    int b = 3;

    int tab[3] = {1,2,3};
    int *p = &tab[2];
    tab[0] = a;
    tab[1] = b;
    printf("-------------------------------------------\n");
    printf("-- NAME/-- VALUE/-- ADRESS/-----------\n");
    printf("-- a -- -----%d --/-- %p-----\n",a,&a);
    printf("-- b -- -----%d --/-- %p-----\n",b,&b);
    printf("-- tab[0] ---%d --/-- %p-----\n",tab[0],&tab[0]);
    printf("-- tab[1] ---%d --/-- %p-----\n",tab[1],&tab[1]);
    printf("-- *p -------%d --/-- %p-----\n",*p,&p);
    return 0;
}
