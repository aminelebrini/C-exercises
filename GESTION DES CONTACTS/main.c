#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Contact {
    char name[50];
    char phone[50];
    char email[50];  
};

void add_contact();
void mod_contact();
void supp_contact();
void aff_contact();
void recherche();

struct Contact contacts[MAX];
int total_cont = 0;

void add_contact() {
    int n;
    printf("\t\t\t\t\tENTRER LE NOMBRE DE CONTACTS A AJOUTER: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\t\t\t\t\tENTRER LE NOM : ");
        scanf("%s", contacts[total_cont].name);

        printf("\t\t\t\t\tENTRER LE NUMERO DE TELEPHONE : ");
        scanf("%s", contacts[total_cont].phone);

        printf("\t\t\t\t\tENTRER L'EMAIL : ");
        scanf("%s", contacts[total_cont].email);

        total_cont++;
    }
    printf("\t\t\t\t\tVOS CONTACTS ONT ETE AJOUTES AVEC SUCCES.\n");
}

void mod_contact() {
    if (total_cont == 0) {
        printf("\t\t\t\t\tAUCUN CONTACT N'EXISTE\n");
        return;
    }

    printf("\t\t\t\t\tLISTE DES CONTACTS:\n");
    for (int i = 0; i < total_cont; i++) {
        printf("%d - NOM : %s, NUMERO : %s, EMAIL : %s\n",
               i + 1, contacts[i].name, contacts[i].phone, contacts[i].email);
    }

    int ch, choix;
    printf("\t\t\t\t\tENTRER LE NUMERO DU CONTACT A MODIFIER: ");
    scanf("%d", &ch);

    if (ch < 1 || ch > total_cont) {
        printf("\t\t\t\t\tCHOIX INVALIDE!\n");
        return;
    }

    do {
        printf("\t\t\t\t\t1- MODIFIER LE NOM\n");
        printf("\t\t\t\t\t2- MODIFIER LE NUMERO DE TELEPHONE\n");
        printf("\t\t\t\t\t3- MODIFIER L'EMAIL\n");
        printf("\t\t\t\t\t4- RETOUR\n");
        printf("\t\t\t\t\tENTRER VOTRE CHOIX : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("NOUVEAU NOM : ");
                scanf("%s", contacts[ch - 1].name);
                break;
            case 2:
                printf("NOUVEAU NUMERO : ");
                scanf("%s", contacts[ch - 1].phone);
                break;
            case 3:
                printf("NOUVEL EMAIL : ");
                scanf("%s", contacts[ch - 1].email);
                break;
            case 4:
                printf("\t\t\t\t\tRETOUR...\n");
                break;
            default:
                printf("\t\t\t\t\tCHOIX INVALIDE!\n");
        }
    } while (choix != 4);
}

void supp_contact() {
    if (total_cont == 0) {
        printf("\t\t\t\t\tAUCUN CONTACT A SUPPRIMER\n");
        return;
    }

    printf("\t\t\t\t\tLISTE DES CONTACTS:\n");
    for (int i = 0; i < total_cont; i++) {
        printf("%d - NOM : %s, NUMERO : %s, EMAIL : %s\n",
               i + 1, contacts[i].name, contacts[i].phone, contacts[i].email);
    }

    int ch;
    printf("\t\t\t\t\tENTRER LE NUMERO DU CONTACT A SUPPRIMER: ");
    scanf("%d", &ch);

    if (ch < 1 || ch > total_cont) {
        printf("\t\t\t\t\tCHOIX INVALIDE!\n");
        return;
    }

    for (int i = ch - 1; i < total_cont - 1; i++) {
        contacts[i] = contacts[i + 1];
    }
    total_cont--;

    printf("\t\t\t\t\tCONTACT SUPPRIME AVEC SUCCES.\n");
}

void aff_contact() {
    if (total_cont == 0) {
        printf("\t\t\t\t\tAUCUN CONTACT A AFFICHER\n");
        return;
    }

    printf("\t\t\t\t\tLISTE DES CONTACTS:\n");
    for (int i = 0; i < total_cont; i++) {
        printf("%d - NOM : %s, NUMERO : %s, EMAIL : %s\n",
               i + 1, contacts[i].name, contacts[i].phone, contacts[i].email);
    }
}

void recherche() {
    if (total_cont == 0) {
        printf("\t\t\t\t\tAUCUN CONTACT N'EXISTE\n");
        return;
    }

    char ser_name[50];
    printf("ENTRER LE NOM DU CONTACT A RECHERCHER: ");
    scanf("%s", ser_name);

    int found = 0;
    for (int i = 0; i < total_cont; i++) {
        if (strcmp(contacts[i].name, ser_name) == 0) {
            printf("TROUVE: %d - NOM : %s, NUMERO : %s, EMAIL : %s\n",
                   i + 1, contacts[i].name, contacts[i].phone, contacts[i].email);
            found = 1;
        }
    }

    if (!found) {
        printf("\t\t\t\t\tAUCUN CONTACT AVEC CE NOM.\n");
    }
}

int main() {
    system("color 30");
    printf("\t\t\t\t\tBIENVENUE DANS VOTRE CARNET DE CONTACTS\n");

    int ch;
    do {
        printf("\nMENU PRINCIPAL\n");
        printf("1- Ajouter Un Contact\n");
        printf("2- Modifier Un Contact\n");
        printf("3- Supprimer Un Contact\n");
        printf("4- Afficher Tous les Contacts\n");
        printf("5- Rechercher un Contact\n");
        printf("6- Quitter\n");

        printf("ENTRER VOTRE CHOIX : ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: add_contact(); break;
            case 2: mod_contact(); break;
            case 3: supp_contact(); break;
            case 4: aff_contact(); break;
            case 5: recherche(); break;
            case 6: printf("Exit...\n"); break;
            default: printf("CHOIX INVALIDE!\n");
        }
    } while (ch != 6);

    return 0;
}
