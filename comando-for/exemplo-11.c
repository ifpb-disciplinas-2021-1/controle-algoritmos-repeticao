/*
Escreva um programa em linguagem C que leia um número 
e exiba os seus divisores exatos.

numero = 6
6/1; 6/2; 6/3; 6/4; 6/5; 6/6;
*/
#include <stdio.h>
int main(){
    int numero=6;
    printf("Digite um número: ");
    scanf("%i", &numero); //6
    for(int contador=1; contador<=numero; contador++){
        if(numero % contador ==0){ // divisor exato
            printf("O número: %i é divisor de %i \n", contador, numero);
        }
    }
    return 0;
}