#include <stdlib.h>
#include <stdio.h>

int main() {
    int nombre;
    char symbol;

    printf("Saisissez un symbole + ou -: ");
    scanf(" %c", &symbol);

    printf("Saisissez un nombre différent de 0: ");
    scanf("%d", &nombre);

    if (nombre == 0) {
        printf("Le nombre doit être différent de 0.\n");
        return 1;
    }

    if (symbol == '+') {
        printf("Affichage des nombres de 0 à %d :\n", nombre);
        for (int i = 0; i <= nombre; i++) {
            printf("%d\n", i);
        }
    } else if (symbol == '-') {
        printf("Affichage des nombres de %d à 0 :\n", nombre);
        for (int i = nombre; i >= 0; i--) {
            printf("%d\n", i);
        }
    } else {
        printf("Symbole non reconnu.\n");
    }

    return 0;
}

