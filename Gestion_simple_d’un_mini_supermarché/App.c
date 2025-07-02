#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

struct produit {
    char name[100];
    int quantite;
    float prix;
};

int count = 0;
struct produit p[MAX];

void ajouter_produits() {
    int n;
    printf("\nSuivez les étapes suivantes pour ajouter des produits\n");
    printf("Entrez le nombre de produits que vous voulez ajouter : ");
    scanf("%d", &n);

    if (count + n > MAX) {
        printf("Erreur : Capacité maximale dépassée !\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("\nProduit %d :\n", count + 1);
        printf("Nom du produit : ");
        scanf("%s", p[count].name);

        printf("Quantité du produit : ");
        scanf("%d", &p[count].quantite);

        printf("Prix du produit : ");
        scanf("%f", &p[count].prix);

        count++;
    }
}

void aff_produits() {
    printf("\nListe des produits :\n");
    if (count == 0) {
        printf("Aucun produit n'a été ajouté.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("Produit %d : %s | Quantité: %d | Prix: %.2f DH\n",
               i + 1, p[i].name, p[i].quantite, p[i].prix);
    }
}

void recherche_produit(){
    char z[100];
    printf("enter le nom de produits : ");
    scanf("%s",z);

    int i = 0;
    for(int i = 0; i <= count; i++)
    {
        if(strcmp(z,p[i].name)== 0)
        {
            printf("Produit trouvé : %s | Quantité: %d | Prix: %.2f DH\n",p[i].name, p[i].quantite, p[i].prix);
        }    
    }
}
void stock_total()
{
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += p[i].quantite;
    }

    printf("Le stock total est : %d unités\n", total);
}
int main() {
    int choix;

    do {
        printf("\n======= SUP-MOL - Gestion de Produits =======\n");
        printf("1 - Ajouter des produits\n");
        printf("2 - Afficher la liste des produits\n");
        printf("3 - Rechercher un produit par son nom\n");
        printf("4 - Afficher le total du stock\n");
        printf("5 - Quitter le programme\n");

        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouter_produits();
                break;
            case 2:
                aff_produits();
                break;
            case 3:
                recherche_produit();
                break;
            case 4:
                stock_total();
                break;
            case 5:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide, réessayez.\n");
        }

    } while (choix != 5);

    return 0;
}
