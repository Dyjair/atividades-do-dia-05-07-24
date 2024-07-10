/*11. Faça um programa em C que calcule e apresente quanto deve ser pago por
um produto considerando a leitura do preço de etiqueta (PE) e o código da
condição de pagamento (CP). Utilize para os cálculos a tabela de condições de
pagamento a seguir:
23
Código da condição de pagamento Condição de pagamento
1 À vista em dinheiro ou cheque, com 10% de
desconto
2 À vista com cartão de crédito, com 5% de
desconto
3 Em 2 vezes, preço normal de etiqueta sem
juros
4 Em 3 vezes, preço de etiqueta com
acréscimo de 10%*/
#include <stdio.h>

int main() {
    float pe, novovalor;
    int cp;

    printf("Informe o preço da etiqueta: ");
    scanf("%f", &pe);

    printf("Qual a condição de pagamento?\n");
    printf("1 - A vista em dinheiro ou cheque, com 10%% de desconto\n");
    printf("2 - A vista com cartão de crédito, com 5%% de desconto\n");
    printf("3 - Em 2 vezes, preço normal de etiqueta sem juros\n");
    printf("4 - Em 3 vezes, preço de etiqueta com acréscimo de 10%%\n");
    printf("Informe o código da condição de pagamento (1, 2, 3 ou 4): ");
    scanf("%d", &cp);

    switch(cp) {
        case 1:
            novovalor = pe * 0.9; // 10% de desconto
            printf("O valor a se pagar é: R$%.2f\n", novovalor);
            break;
        case 2:
            novovalor = pe * 0.95; // 5% de desconto
            printf("O valor a se pagar é: R$%.2f\n", novovalor);
            break;
        case 3:
            novovalor = pe / 2.0; // 2 vezes sem juros
            printf("O valor de cada parcela em 2 vezes é: R$%.2f\n", novovalor);
            break;
        case 4:
            novovalor = pe * 1.1 / 3.0; // 3 vezes com acréscimo de 10%
            printf("O valor de cada parcela em 3 vezes é: R$%.2f\n", novovalor);
            break;
        default:
            printf("Número da condição de pagamento inválido.\n");
    }

    return 0;
}
