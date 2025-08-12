#include <stdio.h>
#include <stdlib.h>

int main()
{
   int mat[] = {1,2,3};
   int mat1[] = {4,5,6};
   int n = sizeof(mat) / sizeof(mat[0]);
   int mats;
   for(int i = 0; i < n; i++)
   {
     mats = mat[i];
     mat[i] = mat1[i];
     mat1[i] = mats;
   }
   printf("mat: ");
   for (int i = 0; i < n; i++)
       printf("%d ", mat[i]);

   printf("\nmat1: ");
   for (int i = 0; i < n; i++)
       printf("%d ", mat1[i]);

  return 0;
}
