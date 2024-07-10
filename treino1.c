//A empresa XKW concedeu um bônus de 20% do valor do salário a todos os funcionários
//com tempo de trabalho na empresa igual ou superior a 5 anos e de 10% aos demais.
//Faça um um programa em C que receba o salário e o tempo de serviço de um
//funcionário, calcule e mostre o valor do bônus recebido por ele.
#include <stdio.h>
int main (){
    int tempos;
    float salario, novosalario;

    printf("Qual é o seu salário?\n");
    scanf("%f", &salario);
    printf("Qual o seu tempo (em anos), de serviço?\n");
    scanf("%d", &tempos);

    switch(tempos){
        case 5 ... 50:
        novosalario = salario * 0.20;
        printf("O seu valor do bonus recebido é de %2.f.", novosalario);
        break;
        case 1 ... 4:
        novosalario = salario * 0.10;
        printf("O seu valor do bonus recebido é de %2.f.", novosalario);
        break;
    }
    return 0;
}