/*Affiche un menu pour effectuer : addition, soustraction, multiplication ou division.
Utilise do...while et switch*/

#include <stdio.h>



int main()
{
    int choice;
    int n1,n2;
    printf("enter your n1 : ");
    scanf("%d",&n1);
    
    printf("enter your n2 : ");
    scanf("%d",&n2);
   do{
      
      printf("1 - add\n2 - sub\n3 - mul\n4 - div\n5 - exit\n"); 
      
      printf("enter your choice : ");
      scanf("%d", &choice);
      
      switch(choice) {
            case 1:
                printf("your sum is : %d \n\n", n1 + n2);
                break;
            case 2:
                printf("Your bid difference is : %d \n\n", n1 - n2);
                break;
            case 3:
                printf("Your product is : %d \n\n", n1 * n2);
                break;
            case 4:
                if (n2 != 0)
                    printf("Your quotient is: %d\n\n", n1 / n2);
                else
                    printf("Cannot divide by zero!\n\n");
                break;
            case 5:
                printf("Exiting program...\n\n");
                break;
            default:
                printf("Invalid choice. Try again.\n\n");
        }
   }while(choice != 5);
   
    return 0;
}
