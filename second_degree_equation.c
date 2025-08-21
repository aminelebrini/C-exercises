#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c, delta, x;

    printf("enter la valeur de a : ");
    scanf("%f",&a);
    printf("enter la valeur de b : ");
    scanf("%f",&b);
    printf("enter la valeur de c : ");
    scanf("%f",&c);

    delta = pow(b,2) - 4*a*c;
    printf("la valeur de delta est : %f\n",delta);
    if(delta > 0)
    {
        printf("delta et > 0, l'equation admet 2 solution:\n");
        x = (-b - sqrt(delta)/2*a);
        printf("la valeur de x est : %f\n",x);
        x = (-b + sqrt(delta)/2*a);
        printf("la valeur de x est : %f\n",x);
    }
    else if(delta == 0)
    {
        printf("delta = 0, l'equation admet une seul solution:\n");
        x = (-b) / 2*a;
        printf("la valeur de x est : %f\n",x);
    }else
    {
        printf("delta est < 0,l'equation n'admet pas une solution\n");
    }
  return 0;
}
