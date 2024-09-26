#include <stdlib.h>
#include <stdio.h>

int main() {
    int nombre;

    do {
        printf("Veuillez saisir un nombre différent de 0 : ");
        scanf("%d", &nombre);
    } while (nombre == 0); 

    printf("Les nombres de 0 à %d sont :\n", nombre);
    for (int i = 0; i <= nombre; i++) {
        printf("%d\n", i);
    }

    return 0;
}

