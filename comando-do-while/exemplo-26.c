/*
Escreva um programa em linguagem C que simule um jogo de adivinhação. 
O algoritmo deve calcular um número aleatório (selecionado) e ler uma quantidade 
indefinida de números positivos (informado). Ele será finalizado quando os números 
selecionado e informados forem iguais ou quando ultrapassar cinco tentativas. 
Por fim, devem ser exibidos: o número selecionado e a quantidade de tentativas
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int aleatorio = rand() % 10;
    int numero;
    int tentativas = 0;
    do{
        printf("Digite um número: ");
        scanf("%i", &numero);
        tentativas++;
    }while(aleatorio!=numero && tentativas< 5);
    if(aleatorio ==numero){
        printf("Parabéns, você acertou!!!!\n");
    }else{
        printf("Número selecionado foi: %i\n", aleatorio);
    }
    printf("Tentativas: %i\n", tentativas);   
    return 0;
}