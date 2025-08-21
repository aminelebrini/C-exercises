#include <stdio.h>

int main() {
    int n, U0 = 0, U1 = 1,Un;

    printf("enter n : ");
    scanf("%d",&n);

    if(n == U0)
    {
        printf("%d\n",U0);
    }else if(n == U1)
    {
     printf("%d\n",U0);
    }else{
        for(int i = 1; i <= n; i++)
        {
            U0 = U1;
            U1 = Un;
            Un = U0 + U1;
            printf("%d\n",Un);
        }
    }
    return 0;
}
