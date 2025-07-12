#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    
    char *str = "um6p is the best university";
    int i = 0 , j = 0;

    while(str[i] == ' ')
    {
        i++;
    }
    while(str[i])
    {
        if(str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
        {
            j++;
        }
        i++;
    }
    printf("the number of the words_in_a_sentence is : %d\n",j);
}