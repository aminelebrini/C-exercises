#include <stdio.h>

int main()
{
    int arr[]= {1,2,3,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i,n = 0;
    for(i = 0; i < size; i++)
    {
       for(n = i + 1; n < size; n++)
       {
           if(arr[i] == arr[n])
           {
               for(int k = n; k < size - 1;k++)
               {
                   arr[k] = arr[n + 1];
               }
               size--;
               n--;
           }
       }
    }
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
