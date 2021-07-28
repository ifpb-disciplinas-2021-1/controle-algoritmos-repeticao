#include <stdio.h>
int main(){
  int numero = 19;
  while (numero <= 0 || numero % 2 != 0){ //validar o número digitado pelo usuário
     printf("\n Valor não permitido");
     printf("\n Digite um valor: ");
     scanf("%d", &numero);
  }
  printf("Valor do numero: %d", numero); //número positivo e par
  return 0; 
}