/*
Escreva um programa em linguagem C que
incremente e escreva o valor de uma única variável 
(iniciada com o valor 1) até que o usuário digite o valor zero.
*/

#include <stdio.h>
int main(){
    int numero; //lixo da memoria
    int contador = 1;
    do{ // pelo menos uma execução do bloco de códigos
        printf("Digite um número: ");
        scanf("%i", &numero);
        printf("Contador: %i \n", contador++);
    }while(numero!=0);

    // printf("Digite um número: ");
    // scanf("%i", &numero);
    // while(numero!=0){
    //     printf("Contador: %i \n", contador++);
    //     printf("Digite um número: ");
    //     scanf("%i", &numero); //atualizar a expressão lógica
    // }
    return 0;
}