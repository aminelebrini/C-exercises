#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[] = "Programming";
    int len = strlen(arr);
    for(int i = 0; i < len;i++)
    {
        int count = 1;
        if(arr[i] == '0')
        {
            continue;
        }
        for(int j = i+1; j < len;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                arr[j] = '0';
            }
        }
         printf("%c = %d\n",arr[i],count);
    }
}
