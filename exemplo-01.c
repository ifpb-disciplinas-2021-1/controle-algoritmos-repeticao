#include <stdio.h>
int main(){
   int numero = 1;
   printf("%d \n", numero); // imprime 1
   numero = numero + 1; 
   printf("%d \n", numero); // imprime 2
   numero += 1;
   printf("%d \n", numero); // imprime 3
   numero++;
   printf("%d \n", numero); // imprime 4
   numero++;
   printf("%d \n", numero); // imprime 5
   return 0;
}