#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    int nombre;

    printf("Choisissez un nombre entre 1 et 100 : ");
    scanf("%d", &nombre);

    if (nombre > random_number) {
        printf("C'est moins.\n");
    } else if (nombre < random_number) {
        printf("C'est plus.\n");
    } else {
        printf("Bravo, vous avez trouvé le nombre !\n");

  }

    return 0;
}

