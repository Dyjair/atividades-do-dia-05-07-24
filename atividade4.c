/*4. Faça um programa que leia uma letra que represente o estado civil de uma pessoa e mostre uma 
mensagem com a sua descrição (Solteiro(a), Casado(a), Viúvo(a), Divorciado(a)). O programa 
deve apresentar uma mensagem de adequada caso uma letra diferente seja informada.*/  
#include <stdio.h>
int main (){
    char letra;

    printf("Digite uma letra conforme seu estado civil:(S, C, V, D):\n");
    scanf("%c", &letra);
    switch (letra){
       case 's':
       case 'S':
       printf("Solteiro(a)");
       break;
       case 'c':
       case 'C':
       printf("Casado(a)");
       break;
       case 'v':
       case 'V':
       printf("Viúvo(a)");
       break;
       case 'd':
       case 'D':
       printf("Divorciado(a)");
       break;
       default:
       printf("Letra inválida.\n");
    }
    return 0;
}