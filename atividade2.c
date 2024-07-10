/*2. Um clube de futebol pretende classificar seus atletas em categorias. Para isso ele contratou um 
programador para criar um programa para executar essa tarefa. O programa deve solicitar o nome 
e a idade de um atleta e imprimir os seus dados juntamente com a sua categoria. Utilize a tabela 
abaixo para determinar a categoria de cada atleta.
05 a 10 Infantil 
11 a 15 Juvenil 
16 a 20 Junior
21 a 25 Profissional*/
#include <stdio.h>
int main (void){
    int idade,categ;
    char nome[60];

    printf("Informe sua idade:");
    scanf("%d", &idade);

    printf("Informe seu nome:");
    scanf("%s", nome);
    
    if (idade >=5 && idade <=10){
        printf("%s tem %d anos e pertence a categoria infantil.", nome, idade);
    }
    else if (idade >=11 && idade <=15){
        printf("%s tem %d anos e pertence a categoria juvenil.", nome, idade);
    }
    else if ( idade >=16 && idade <=20){
        printf("%s tem %d anos e pertence a categoria junior.", nome, idade);
    }
    else if (idade >=21 && idade <=25){
        printf("%s tem %d anos e pertence a categoria profissional.", nome, idade);
    }
}
