

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("EXERCICE 1\n\n");

    printf("Bonjour !\n");
    printf("Bienvenue dans le monde du C.\n");
    printf("Je vais devenir programmeur !\n");

    // ou avec un seul printf:
    printf("Bonjour!\nBienvenue dans le monde du C\nJe vais devenir programmeur !");



    printf("\n\nEXERCICE 2\n\n");

    char prenom[] = "Bastien";
    int age = 36;
    int annee_naissance = 1990;
    char lettre = 'Z';

    printf("Prénom : %s\n", prenom);
    printf("Age : %d\n", age);
    printf("Année de naissance : %d\n", annee_naissance);
    printf("Lettre préférée : %c\n", lettre);



    printf("\n\nEXERCICE 3\n\n");
    int a = 0;
    int b = 0;

    printf("Donne moi une valeur pour a : ");
    scanf("%d", &a);

    printf("Donne moi une valeur pour b : ");
    scanf("%d", &b);


    printf("a = %d, b = %d\n", a, b);

    printf("Somme %d\n", a+b);
    printf("Différence : %d\n", a-b);
    printf("Produit : %d\n", a*b);
    printf("Division à problème : %f\n", a/b);
    printf("Division résolue : %f\n", (float) a/b);
    printf("Reste : %d\n", a%b);





    printf("\n\nEXERCICE 4\n\n");
    int celsius = 25;
    double fahrenheit = celsius * 9/5 + 32;
    printf("%d°C = %.2f°F\n", celsius, fahrenheit);


    printf("\n\nEXERCICE 5\n\n");
    double prixHT = 79.9;
    double tva = 0.2;

    printf("Prix HT : %.2lf€\nTVA (%.0lf%%): %.2lf€\nPrix TTC : %.2lf€\n", prixHT, tva*100, prixHT * tva, prixHT * (1+tva));
    tva = 0.055;
    printf("\nPrix HT : %.2lf€\nTVA (%.1lf%%): %.2lf€\nPrix TTC : %.2lf€\n", prixHT, tva*100, prixHT * tva, prixHT * (1+tva));


    printf("\n\nEXERCICE 6\n\n");
    int note1 = 14, note2 = 11, note3 = 16;

    printf("Note 1 : %d\nNote 2 : %d\nNote 3 : %d\n", note1,  note2, note3);
    printf("Moyenne : %lf\n", (note1+note2+note3)/3.0);


    printf("\n\nEXERCICE 7\n\n");
    int start = 3601;
    int heures = start / 3600;
    int r = start % 3600;
    int minutes = r / 60;
    r = r % 60;
    int secondes = r;
    printf("Total secondes : %d\nHeures : %d\nMinutes : %d\nSecondes : %d\n", start, heures, minutes, secondes);



    printf("\n\nEXERCICE 8\n\n");
    int salaireBrut = 2500;
    double tauxCotisations = 0.22;
    int cotisations = salaireBrut * tauxCotisations;
    int salaireNet = salaireBrut - cotisations;
    printf("Salaire brut : %d\nCotisations : %d\nSalaire net : %d\n", salaireBrut, cotisations, salaireNet);

    return 0;
}

