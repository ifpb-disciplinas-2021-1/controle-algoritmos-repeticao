/*
Escreva um programa em linguagem C que leia um número inteiro positivo e não-nulo, 
calcule e exiba o valor de H, conforme a seguinte equação:

H=1/1+1/2+1/3+1/4...+1/N
*/
#include <stdio.h>
int main(){
    int numero=6;
    float H=0;
    printf("Digite um número positivo: ");
    scanf("%i", &numero);
    for(int contador=1;contador<=numero; contador++){
        //H=1/1+1/2+1/3+1/4...+1/N
        H = H + (float) 1/contador; 
    }
    printf(" O valor de H: %f \n", H);
    return 0;
}