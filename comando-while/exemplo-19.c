/*Escreva um programa em linguagem C que leia um número inteiro e exiba
 quantos de algarismos o número informado possui.
cdu
 23 = 2 -> 2d + 2 uni
123 = 3 -> 1c + 2d+ 3u
  2 = 1
*/
#include <stdio.h>
int main(){
    int numero;
    int contador = 1;
    printf("Digite um número: ");
    scanf("%i", &numero);
    while(numero >= 10){
        contador++;
        numero = numero / 10;
    }
    printf("O número informado possui %i algarismos \n", contador);

    // int dezena = numero / 10;
    // int unidade = numero % 10;
    // printf("Valores: %i (dez); %i (uni)", dezena, unidade);
    return 0;
}