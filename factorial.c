#include <stdio.h>

int main()
{
    int n;
    printf("enter un nombre pour calculer le factoriel : ");
    scanf("%d",&n);

    int sum = 1;
    
    while (n != 0)
    {
        sum *= n--;
    }
    
    printf("%d",sum);
}