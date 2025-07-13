#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

int main()
{
    char *str;
    int i, j;
    printf("enter your string : ");
        scanf("%s",str);
    
    char *rev;
    int len = strlen(str);
        for(i = 0;i < len;i++)
        {
            rev[i] = str[len - 1 - i];
        }
    printf("%s\n",rev);

}
