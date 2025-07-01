#include <stdio.h>
#include <math.h>
#include <malloc.h>
int main()
{
    int *tab;
    int n;
    printf("entrer le nombre des n : ");
    scanf("%d",&n);

    tab = (int *)malloc(n * sizeof(int));

    if (tab == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        return 1;
    }
    for (int i = 0; i <= n; i++)
    {
        printf("enter les nombres : ");
        scanf("%d",&tab[i]);
    }
    int max = tab[0];
    for(int i = 0;i<=n;i++)
    {
        if(tab[i] > max)
        {
            max = tab[i];
        }
    }
    printf("le plus grand nombre est %d",max);

    free(tab);
    return 0;
}