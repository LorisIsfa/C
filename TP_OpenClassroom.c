//
//  TP_OpenClassroom.c
//  
//
//  Created by Loris on 19/10/2016.
//
//

#include "TP_OpenClassroom.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int nombre1;
    int nombre = rand()%100+1;
    const int MAX = 100, MIN = 1;
    srand(time(NULL));
    int nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    printf("%d \n",nombreMystere);
    printf("Quel est le nombre ? \n");
    scanf("%d",&nombre1);
    if (nombre1<nombre)
    {
        printf("C'est plus \n");
    }
    else if (nombre1>nombre)
    {
        printf("C'est moins");
    }
    else
    {
        printf("Bravo, vous avez trouvé ! \n");
    }
    
    return 0;
}
