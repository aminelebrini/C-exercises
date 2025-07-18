#include <stdio.h>



int main()
{
    float montant;
    float cal;
    printf("enter votre montant : ");
    scanf("%f",&montant);
    
    if(montant < 100)
    {
        printf("vore montant est inférieur à 100 alors votre remise est 0%\n");
    }else if(montant >= 100 && montant < 500)
    {
        cal = montant - (montant * 0.05);
        printf("Votre montant est compris entre 100 et 500, votre remise est donc de 5% : \n");
        printf("le montant après remise est : %2.f \n",cal);
    }else if(montant >= 500)
    {
     cal = montant - (montant * 0.1);  
      printf("Votre montant est plus grand que 500, votre remise est donc de 10% : \n");
        printf("le montant après remise est : %2.f \n",cal);
    }
    return 0;
}
