#include <stdio.h>

int main() {
    // Write C code here
    int n;
    int num[100];
    int n1;
    int i = 0, j = 0;
    int max = 0;
    int sum = 0;
    printf("enter n1 : ");
    scanf("%d",&n1);
    
        for(i = 0; i < n1;i++)
        {
            printf("enter n ");
            scanf("%d",&num[i]);
            if(num[i] > max)
            {
                max = num[i];
            }
            
        }
        for(j = 0; j < n1 ; j++)
        {
            printf("%d\n",num[j]);
            
        }
        
        for(j = 0; j < n1 ; j++){
            
            if(num[j] < max)
            {
            sum += num[j];
            }
        }
        printf("sum %d\n",sum);
    return 0;
}
