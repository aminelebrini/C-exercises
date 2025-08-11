#include <stdio.h>
#include <stdlib.h>

struct Car{
    char *brand;
    char *model;
    int year;
};

int main()
{
    struct Car* car;
    int minYear = 0,oldIndex = 0;
    car = malloc(3*sizeof(struct Car));
    for(int i = 0;i<3;i++){

        car[i].brand = (char*)malloc(100 * sizeof(char));
        car[i].model = (char*)malloc(100 * sizeof(char));

        printf("enter the brand of car number %d : ",i+1);
        scanf("%s",car[i].brand);
        printf("enter the model of car number %d : ",i+1);
        scanf("%s",car[i].model);
        printf("enter the year of car number %d : ",i+1);
        scanf("%d",&car[i].year);
    }
    minYear = car[0].year;
    for(int  i = 0; i<3;i++)
    {
        if(car[i].year < minYear){
        minYear = car[i].year;
        oldIndex = i;
        }
    }
        printf("%s",car[oldIndex].brand);
}
