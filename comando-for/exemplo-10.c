/*
Escreva um programa em linguagem C que leia um número inteiro positivo e exiba a 
soma dos números de 1 até o valor do número informado
*/
#include <stdio.h>
int main(){
    int numero;
    int soma = 0;
    //ler um numero inteiro
    printf("Digite um número: ");
    // armazenar esse número na memoria
    scanf("%i", &numero);  // 5
    // somar os numeros entre 1 e numero informado
    for(int contador=1; contador<=numero; contador++){
        soma = soma + contador;
    }
    // exibir essa soma
    printf("A soma dos números foi: %i\n", soma);
    return 0;
}
