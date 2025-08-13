#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "amine and You";
    int count = 0;
    int i = 0;
    while(str[i])
    {
        if(i == 0)
        {
            char c = str[i];
            if(c >= 'A' && c <= 'Z')
            {
                c = c + 32;
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
            {
                count++;
            }
        }
        if((str[i] == ' ' || str[i] == '\t') && str[i+1] != '\0')
        {
            char c = str[i + 1];
            if(c >= 'A' && c <= 'Z')
            {
                c = c + 32;
            }
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
            {
                count++;
            }
        }
        i++;
    }
    printf("%d",count);

}
