#include <stdio.h>
#include <stdlib.h>
int main ()
{
    printf("                            ******Jeu-Plus-Moins******\n\n");
    printf("                            ******Choisis Un Niveau******\n\n");
    printf("1 : Facile\n2 : Normale\n3 : Difficile\n\n");
/// Declare Age is my favorite name on programming
int age = 0;
scanf("%d", &age);
/// si l'utilisateur a entré numéro 1 , Max = 100, Min = 1; ECT pour les scanf
if (age == 1) {
    printf("Niveau Facile\n");
    int nombreMystere = 0, nombreUtilisateur = 0, compteur = 0, continuerPartie = 1;
    const int MAX = 100, MIN = 1;

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    printf("Ceci est un petit jeu, vous devez trouver le nombre mystere");

    while(continuerPartie)
    {
    do
    {
        printf("\n\nDonner un nombre: "); scanf("%d", &nombreUtilisateur);

        if(nombreUtilisateur < nombreMystere)
            printf("C'est plus!");
        else if(nombreUtilisateur > nombreMystere)
            printf("C'est moins!");
        else
            printf("\nBravo! Vous avez trouve le nombre mystere en %d coups!", compteur);

        compteur++;
    } while(nombreUtilisateur != nombreMystere);

    printf("\n\nVoulez-vous faire une autre partie ? Si oui 1, sinon 0: "); scanf("%d", &continuerPartie);
    }
}
else if (age == 2) {
    printf("Niveau Normale\n");
int MAX = 1000, MIN = 1;
int nombreMystere = 0, nombreUtilisateur = 0, compteur = 0, continuerPartie = 1;

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    printf("Ceci est un petit jeu, vous devez trouver le nombre mystere");

    while(continuerPartie)
    {
    do
    {
        printf("\n\nDonner un nombre: "); scanf("%d", &nombreUtilisateur);

        if(nombreUtilisateur < nombreMystere)
            printf("C'est plus!");
        else if(nombreUtilisateur > nombreMystere)
            printf("C'est moins!");
        else
            printf("\nBravo! Vous avez trouve le nombre mystere en %d coups!", compteur);

        compteur++;
    } while(nombreUtilisateur != nombreMystere);

    printf("\n\nVoulez-vous faire une autre partie ? Si oui 1, sinon 0: "); scanf("%d", &continuerPartie);
    }
}
else if (age == 3) {
    printf("Niveau Difficile\n");
    int MAX = 10000, MIN = 1;
    int nombreMystere = 0, nombreUtilisateur = 0, compteur = 0, continuerPartie = 1;

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    printf("Ceci est un petit jeu, vous devez trouver le nombre mystere");

    while(continuerPartie)
    {
    do
    {
        printf("\n\nDonner un nombre: "); scanf("%d", &nombreUtilisateur);

        if(nombreUtilisateur < nombreMystere)
            printf("C'est plus!");
        else if(nombreUtilisateur > nombreMystere)
            printf("C'est moins!");
        else
            printf("\nBravo! Vous avez trouve le nombre mystere en %d coups!", compteur);

        compteur++;
    } while(nombreUtilisateur != nombreMystere);

    printf("\n\nVoulez-vous faire une autre partie ? Si oui 1, sinon 0: "); scanf("%d", &continuerPartie);
    }
}











    return 0;
}
