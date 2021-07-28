/* Escreva um programa em linguagem C que exiba os números de 10 a 1 */
#include <stdio.h>
int main(){
    for(int numero =10; numero >= 1; numero = numero - 1){
        printf("%d \n", numero);
    }
    // for( int numero =1; numero <=10 ; numero++) {
    //     printf("%d \n", (11-numero));
    // }
    return 0;
}