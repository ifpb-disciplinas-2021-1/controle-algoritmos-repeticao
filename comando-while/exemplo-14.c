// O que esse algoritmo faz?
#include <stdio.h>
int main(){
  char letra = '\0';
  while (letra!='a'){ //verificando se a letra é diferente de 'a'
     printf("%c", letra);
     letra= getchar(); //atualizando a variável de controle
  }
  printf("Você digitou a tecla: %c \n", letra);
  return 0;
}