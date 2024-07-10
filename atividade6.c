//6. Escreva um programa em C que leia uma letra e indique se ela é uma vogal ou consoante. Utilize 
//uma estrutura de caso para resolver este problema.
#include <stdio.h>

int main() {
    char letra;

    printf("Informe uma letra para saber se é vogal ou consoante:\n");
    scanf(" %c", &letra); 

    switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("A letra '%c' informada é vogal.\n", letra); 
            break;
        default:
            if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) { 
                printf("A letra informada '%c' é consoante.\n", letra);
            } else {
                printf("O caractere informado não é uma letra do alfabeto.\n");
            }
    }

    return 0;
}
