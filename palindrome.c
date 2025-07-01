#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void palindrome(char *s)
{
    char rev[100];
    int len = strlen(s);
    for(int i = 0;i< len;i++)
    {
        rev[i] = s[len - 1 - i];
    }
    rev[len] = '\0';

    if (strcmp(s, rev) == 0) {
        printf("C'est un palindrome ✅\n");
    } else {
        printf("Ce n'est pas un palindrome ❌\n");
    }
}
int main()
{
    char z[100];
    printf("enter un mot pour la verification : ");
    scanf("%s",z);
    palindrome(z);
}