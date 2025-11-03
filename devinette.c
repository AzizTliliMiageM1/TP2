#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nombreMystere, nombreEntre, essais = 0;
    srand(time(NULL));
    nombreMystere = rand() % 100 + 1; // nombre entre 1 et 100
    printf("Devine le nombre mystère (entre 1 et 100) :\\n");
    do {
        printf("Ta proposition : ");
        scanf("%d", &nombreEntre);
        essais++;
        if (nombreEntre < nombreMystere)
            printf("C’est plus !\\n");
        else if (nombreEntre > nombreMystere)
            printf("C’est moins !\\n");
        else
            printf("Bravo ! Trouvé en %d essais.\\n", essais);
    } while (nombreEntre != nombreMystere);
    return 0;
}