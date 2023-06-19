#include <stdlib.h>
#include <stdio.h>
#include <string.h>

>

void swap(int *a, int *b);

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int imprimirArregloInt(int *numeros, int indice){
    for (int i=0; i < indice; i++){
        printf("numero %d: %d\n", i, numeros[i]);
    }
}

int oRecursivo(int *numeros, int aux, int indice, int cant){
    for (int i = 0; i<indice; i++){
        if (numeros[i] > numeros[i+1]){
            swap(&numeros[i], &numeros[i+1]);
            cant++;
        }
        printf("numero %d: %d\n", i, numeros[i]);
    }
    return cant;
}

int main(){
    //char numeroschar[] = "5 1 2 3 5 4";
    char numeroschar[] = "7 3 4 6 1 5 8 7";
    char *separador = strtok(numeroschar, " ");
    int cantidad;
    if (separador != NULL){
        cantidad = atoi(separador);
    }
    separador = strtok(NULL, " ");
    int arreglo[cantidad];
    int indice = 0;
    while (separador != NULL){
        arreglo[indice] = atoi(separador);
        indice++;
        separador = strtok(NULL, " ");
    }
    for (int i=0; i<indice; i++){
        printf("%d\n", arreglo[i]);
    }
    int cantMOV = 0;
    int cantidadMOVS;
    cantidadMOVS = oRecursivo(arreglo, 0, indice, cantMOV);
    imprimirArregloInt(arreglo, indice);
    printf("cantidadMOVS: %d", cantidadMOVS);
    return 0;
}
