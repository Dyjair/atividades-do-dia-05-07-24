//3. Escreva um programa que leia um número inteiro entre 1 e 10 e mostre-o escrito por extenso. 
//Caso seja inserido um número fora deste intervalo, o programa deve apresentar a mensagem 
//“Número inválido”.
#include <stdio.h>
int main (){
    int numero;
    printf("Informe um número inteiro entre 1 e 10:");
    scanf("%d", &numero);

    switch(numero){
        case 1:
        printf("O numero 1 por extenso é: Um\n");
        break;
        case 2: 
        printf("O numero 2 por extenso é: Dois\n");
        break;
        case 3:
        printf("O numero 3 por extenso é: Três\n");
        break;
        case 4:
        printf("O numero 4 por extenso é: Quatro\n");
        break;
        case 5:
        printf("O numero 5 por extenso é: Cinco\n");
        break;
        case 6:
        printf("O numero 6 por extenso é: Seis\n");
        break;
        case 7:
        printf("O numero 7 por extenso é: Sete\n");
        break;
        case 8:
        printf("O numero 8 por extenso é: Oito\n");
        break;
        case 9:
        printf("O numero 9 por extenso é: Nove\n");
        break;
        case 10:
        printf("O numero 10 por extenso é: Dez\n");
        break;
        default: 
        printf("O numero que você digitou é invalido:.");
    }
    return 0;
}