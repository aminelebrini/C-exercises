#include <stdio.h>

int compt_voyelles(char *s)
{
    int i = 0;
    int j = 0;
    while (s[i])
    {
        if(s[i] == 'a' || s[i]== 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            j++;
        }
        i++;
    }
    return j;
    
}

int main()
{
    char z[100];
    printf("enter votre mot : ");
    scanf("%s",z);
    int x = compt_voyelles(z);
    printf("%d",x);
}