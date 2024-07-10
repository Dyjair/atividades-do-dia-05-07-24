/*12. Construa um algoritmo que, tendo como dados de entrada a altura (H) e o sexo (S) de uma
pessoa calcule e apresente seu peso ideal utilizando as seguintes fórmulas:
Para homens: Peso ideal (P) = (72,7 * H) – 58 Para mulheres: Peso ideal (P) = (62,1 * H) – 44,7*/ 
#include <stdio.h>
int main (){
    char letra;
    float altura, peso_ideal;

    printf("Para descobrir seu peso ideal:\n");
    printf("Informe sua altura:\n");
    scanf("%f", &altura);
    printf("Informe seu sexo(com M para masculino e F para feminino)");
    scanf(" %c", &letra);

    switch(letra){
        case 'M':
        peso_ideal = (72.7 * altura) - 58; 
        printf("Seu peso ideal é :%2.fKg", peso_ideal);
        break;
        case 'F':
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é:%2.fKg", peso_ideal);
        break;
        default:
        printf("Letra informada invalida:");
    }
    return 0;
}