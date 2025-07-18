// switch : 1 pour DH ➜ €, 2 pour € ➜ DH
// do...while : tant que l'utilisateur veut continuer

#include <stdio.h>



int main()
{
    int choice;
    float dh, euro,conv_eu,conv_dh;
   do{
      
      printf("1 - dh to euro\n2 - euro to dh\n3 - exit\n"); 
      
      printf("enter your choice : ");
      scanf("%d", &choice);
      
      switch(choice) {
            case 1:
                printf("enter your sum in dh : ");
                scanf("%f", &dh);
                conv_eu = dh / 10.75;
                printf("In exchange for converting your total in euros: %2.f \n\n", conv_eu);
                break;
            case 2:
            printf("enter your sum in dh : ");
                scanf("%f", &euro);
            conv_dh = euro * 10.75;
                printf("In exchange for converting your total in dirham : %2.f \n\n", conv_dh);
                break;
            case 3 : 
            printf("exiting program...");
            break;
            default:
                printf("Invalid choice. Try again.\n\n");
        }
   }while(choice != 3);
   
    return 0;
}
