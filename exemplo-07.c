/* Escreva um programa em linguagem C que exiba a seguinte mensagem:
0 5 10 15 20 25 30 35 40 45 50 Terminou!
 */
#include <stdio.h>
int main(){
    // for(int contador=0; contador <=50 ;contador++){
    //     if(contador % 5 ==0){  // contador é divisor de 5
    //         printf("%d ", contador);
    //     }
    // }
    // for(int contador =0; contador <=10; contador++){
        // int resultado = 5*contador;
    //     printf("%d ", resultado);
    // }
    for(int contador =0; contador <=50; contador+=5){
        printf("%d ", contador);
    }
    printf("Terminou!\n");
    // printf("0 5 10 15 20 25 30 35 40 45 50 Terminou!\n");    
    return 0;
}