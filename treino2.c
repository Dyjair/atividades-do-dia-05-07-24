//Faça um programa que solicita ao usuário três valores correspondentes aos lados de um
//triângulo. Informe se o triângulo é eqüilátero (possui 3 lados iguais), isósceles (possui dois lados
//iguais) ou escaleno (não possui lados iguais).
#include <stdio.h>
int main (){
    float a, b, c;
    printf("Informe 3 valores correspondente aos lados de um triangulo:\n");
    printf("Primeiro valor:");
    scanf("%f", &a);
    printf("Segundo valor:");
    scanf("%f", &b);
    printf("O terceiro valor:");
    scanf("%f", &c);

    if(a == b && b == c && a == c){
        printf("O triangulo é Equilátero(possui 3 lados iguais):");
    }
    else if(a == b && c != a){
        printf("O triangulo é Isosceles(possui 2 lados iguais):");
    }
    else{
        printf("O triangulo é Escaleno(não possui nenhum lado igual):");
    }
    return 0;
}