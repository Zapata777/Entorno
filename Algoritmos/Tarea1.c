#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char numeros[] = "5 1 2 3 4 5";
  //char numeros[] = "7 3 4 6 1 5 8 7";
  char *separador = strtok(numeros," ");
  int cantidad;
  if (separador != NULL){
    cantidad = atoi(separador);
  }
  separador = strtok(NULL," ");
  int arreglo[cantidad];
  int indice = 0;
  while (separador != NULL) {
    arreglo[indice] = atoi(separador);
    indice++;
    separador = strtok(NULL, " ");
  }
  //for (int i=0; i<indice;i++){
  //  printf("%d\n",arreglo[i]);
  //}
  for(int i = 0; i < indice; i++){
    
  }
  

  return 0;
}
