// O que esse algoritmo faz?
#include <stdio.h>
int main(){
  int numero;
  do {
     printf("Digite um número: ");
     scanf("%d", &numero);
  }while (numero <=200); //validando a entrada
    //se e somente se o número for maior que 200 
    printf("Número: %i", numero); //numero > 200
  return 0;
}