/* Escreva um programa em linguagem C que leia um número e exiba a sua tabuada
numero = 5

5 x 0 = 0
5 x 1 = 5
5 x 2 = 10
 ...
5 x 9 = 45
 */
#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%i", &numero);
    for(int contador =0; contador <=9; contador++){
        int resposta = numero * contador;
        printf("%d x %d = %d \n",numero, contador, resposta); //5 x 0 = 0
    }
    return 0;
}