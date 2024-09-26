#include <stdlib.h>
#include <stdio.h>

int main() {
    char symbol;

    printf("Veuillez choisir un signe d'opération (+, -, *, /, %%): ");
    scanf("%c", &symbol);

    if (symbol == '+') {
        printf("L'opération est une addition.\n");
    } else if (symbol == '-') {
        printf("L'opération est une soustraction.\n");
    } else if (symbol == '*') {
        printf("L'opération est une multiplication.\n");
    } else if (symbol == '/') {
        printf("L'opération est une division.\n");
    } else if (symbol == '%') {
        printf("L'opération est un module.\n");
    } else {
        printf("L'opération n'existe pas.\n");
    }

    // Retourner le code de fin 0
    return 0;
}


