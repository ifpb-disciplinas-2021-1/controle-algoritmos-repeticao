/*
Escreva um programa em linguagem C que leia 5 números reais, 
verifique e exiba quantos dos números lidos são maiores que 10
*/
#include <stdio.h>
int main(){
    int quantidade=0; //alocar lixo
    float numero;
    for(int contador=1; contador <=5; contador++){
        printf("Digite um número: ");
        scanf("%f", &numero);
        if(numero > 10){
            quantidade++; //quantidade +=1; // quantidade = quantidade+1;
        }
    }

    // float numero1, numero2, numero3, numero4, numero5;
    // int contador=0;
    // printf("Digite cinco números: ");
    // scanf("%f%f%f%f%f", &numero1,&numero2, &numero3, &numero4, &numero5);
    // if(numero1>10) contador ++;
    // if(numero2>10) contador ++;
    // if(numero3>10) contador ++;
    // if(numero4>10) contador ++;
    // if(numero5>10) contador ++;
    printf("Foram encontrados %d números maiores que 10 \n", quantidade);
    return 0;
}