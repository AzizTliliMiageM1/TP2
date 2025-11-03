#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // pour sleep()

int main() {
    int numero;

    printf("Bienvenue au jeu de la réussite !\n");
    printf("Entrez un numéro entre 1 et 10 : ");
    scanf("%d", &numero);

    if (numero == 5) {
        printf("\n🎉 Félicitations ! Vous avez trouvé le bon numéro ! 🎉\n");
        printf("Préparez-vous pour la célébration...\n");

        // Mini animation simple avec des étoiles
        for (int i = 0; i < 5; i++) {
            printf("*");
            fflush(stdout);  // force l'affichage immédiat
            sleep(1);        // pause d'une seconde
        }
        printf("\nCélébration terminée ! 🎊\n");
    } else {
        printf("Dommage, ce n'est pas le bon numéro. Essayez encore !\n");
    }

    return 0;
}
