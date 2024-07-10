
//1. Crie um programa em C que receba o valor do salário e calcule o aumento salarial conforme as 
//regras abaixo: 
//a. Se salário < R$ 1.500,00: aumento de 15% 
//b. Se R$ 1.500,00 <= salário < R$ 1.750,00: aumento de 12% 
//c. Se R$ 1.750,00 <= salário < R$ 2.000,00: aumento de 10% 
//d. Se R$ 2.000,00 <= salário < R$ 3.000,00: aumento de 7% 
//e. Se salário > R$ 3.000,00: aumento de 5%
#include <stdio.h>

int main() {
    float salario, aumento;


    printf("Informe o valor do salário: ");
    scanf("%f", &salario);

    if (salario < 1500.00) {
        aumento = salario * 0.15;  
    } else if (salario >= 1500.00 && salario < 1750.00) {
        aumento = salario * 0.12;  
    } else if (salario >= 1750.00 && salario < 2000.00) {
        aumento = salario * 0.10;
    } else if (salario >= 2000.00 && salario < 3000.00) {
        aumento = salario * 0.07;  
    } else if (salario >= 3000.00) {
        aumento = salario * 0.05; 
    }

    printf("O aumento salarial é de: R$ %.2f\n", aumento);

    return 0;
}
