#include <stdio.h>


int
main(void)
{
   int n1, n2;
   char op;
   
   int add(int n1, int n2)
   {
       return n1 + n2;
   }
   
   int sub(int n1, int n2)
   {
       return n1 - n2;
   }
   int mul(int n1, int n2)
   {
       return n1 * n2;
   }
   int div(int n1, int n2)
   {
       return n1 / n2;
   }
   printf("enter the operation : ");
   scanf("%d%c%d",&n1,&op,&n2);
   
   if(op == '+')
   {
       printf("%d\n", add(n1,n2));
       
   }else if(op == '-')
   {
       printf("%d\n", sub(n1,n2));
   }else if(op == '*')
   {
       printf("%d\n", mul(n1,n2));
   }else if(op == '/')
   {
      printf("%d\n", div(n1,n2));
   }

    return 0;
}
