/*5. Crie um programa que contenha uma estrutura de caso para apresentar um menu com as opções 
descritas abaixo. O programa deve receber um número real e apresentar o resultado da operação 
no final da execução. 
a. Raiz quadrada 
b. Metade do valor 
c. 10% do valor 
d. Dobro do valor*/
#include <stdio.h>

int main() {
    char opcao;
    float numero, resultado;

  
    printf("Digite um número real: ");
    scanf("%f", &numero);

 
    printf("\nMENU DE OPÇÕES:\n");
    printf("a. Raiz quadrada\n");
    printf("b. Metade do valor\n");
    printf("c. 10%% do valor\n"); 
    printf("d. Dobro do valor\n");
    printf("Escolha uma opção: ");
    scanf(" %c", &opcao); 

   
    switch (opcao) {
        case 'a':
            if (numero >= 0) {
               
                resultado = numero;
                float estimativa = 1.0;
                while (resultado - estimativa > 0.0001 || estimativa - resultado > 0.0001) {
                    resultado = (resultado + estimativa) / 2;
                    estimativa = numero / resultado;
                }
                printf("A raiz quadrada de %.2f é %.2f\n", numero, resultado);
            } else {
                printf("Não é possível calcular a raiz quadrada de um número negativo.\n");
            }
            break;
        case 'b':
            resultado = numero / 2.0;
            printf("A metade de %.2f é %.2f\n", numero, resultado);
            break;
        case 'c':
            resultado = numero * 0.1;
            printf("10%% de %.2f é %.2f\n", numero, resultado);
            break;
        case 'd':
            resultado = numero * 2.0;
            printf("O dobro de %.2f é %.2f\n", numero, resultado);
            break;
        default:
            printf("Opção inválida\n");
    }

    return 0;
}
