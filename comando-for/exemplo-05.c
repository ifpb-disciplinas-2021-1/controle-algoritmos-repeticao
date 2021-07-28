/* Escreva um programa em linguagem C que exiba o quadrado dos números ímpares
 contidos no intervalo de 1 a 10 
 quadrado de n = n*n;
 7/2 = 3, resto 1
 */
#include <stdio.h>
int main(){
    for(int numero =1; numero <=10; numero++){
        if(numero % 2 != 0){ // se o número é ímpar
            int quadrado = numero * numero; // calculando o quadrado
            printf("%d \n", quadrado); //exibindo o quadrado do número
        }
    }
    return 0;
}