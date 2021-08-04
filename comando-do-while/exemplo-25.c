/*
Escreva um programa em linguagem C que leia um número indeterminado de números positivos. 
O algoritmo deve calcular, imprimir a soma e a média, e continuar até ser digitado o zero.
*/
#include <stdio.h>
int main(){
    int numero;
    int contador = 0;
    int soma =0;
    double media =0; //número de ponto flutuante
    do{
        printf("Digite um número: ");
        scanf("%d", &numero);
        soma = soma + numero;
        contador++;
    }while(numero!=0);
    media = ((double)soma / contador); // 22/7  -> int 7 <-> 7.0
    printf("Soma: %d, Média: %.2lf \n", soma, media);
    return 0;
}
