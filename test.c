#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
 /*  int niveau = 2;
    int nombreDeVies = 5; // Au départ, le joueur a 5 vies
    int annee = 0;
    int age =0;
    
  printf("Vous avez %d vies\n", nombreDeVies);
  printf("**** B A M ****\n"); // Là il se prend un grand coup sur la tête
  nombreDeVies = 4; // Il vient de perdre une vie !
  printf("Ah desole, il ne vous reste plus que %d vies maintenant, et vous êtes niveau %d !\n\n", nombreDeVies, niveau );
  printf("Quel âge avez-vous ? \n");
    scanf("%d", &age);
    annee=2016-age;
    printf("Ah ! Donc vous êtes né en %d \n", annee);
    if (age >= 18)
    {
        printf("Vous êtes majeur \n");
    }
    else
    {
        printf("Vous êtes mineur \n");
    }
  
  */

    
    int choix;
    printf("=== Menu === \n");
    printf("1. Royal cheese \n");
    printf("2. Big Mac \n");
    printf("3. Deluxe \n");
    printf("\n Votre choix ? \n");
    scanf("%d",&choix);
    
    switch (choix)
    {
        case 1:
            printf("vous avez choisi le Royal cheese\n");
            break;
        case 2:
            printf("vous avez choisi le Big Mac\n");
            break;
        case 3:
            printf("vous avez choisi le Deluxe\n");
            break;
        default:
            printf("vous n'avez pas choisi un menu de la liste\n");
            break;
    }
    
    
  return 0;
}
