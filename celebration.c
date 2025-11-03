#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // pour le sleep()

int main() {
    int numero;

    printf("Bienvenue au jeu de la réussite !\n");
    printf("Entrez un numéro entre 1 et 10 : ");
    scanf("%d", &numero);

    if (numero == 5) {
        printf("\n🎉 Félicitations ! Vous avez trouvé le bon numéro ! 🎉\n");
        printf("Préparez-vous pour la célébration...\n");

        for (int i = 0; i < 5; i++) {
            printf("*");
            fflush(stdout); 
            sleep(1);        
        }
        printf("\nCélébration terminée ! 🎊\n");
    } else {
        printf("Dommage, ce n'est pas le bon numéro. Essayez encore !\n");
    }

    return 0;
}
