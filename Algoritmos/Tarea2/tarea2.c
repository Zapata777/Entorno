#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int dividir(int *arr, int i, int j){
    if ((j-i) <= 1){ //
        printf("(%d, %d)\n", arr[i], arr[j]);
        return i, j;
    } else {
        int aux = ((j+i) / 2);
        printf("aux = %d\n", aux);
        int iIzq, iDer, jIzq, jDer;
        iIzq, jIzq = dividir(arr, i, aux);
        iDer, jDer = dividir(arr, aux, j);
        return 1, 1;
    }  
}

int conquistar(int *arr, int i, int j){
    int suma_global = 0;
    int suma_local = 0;
    for (int x = i; x <= j; x++){ //x variable iteradora
        suma_local = suma_local + arr[x];
    }
    printf("suma_local: %d\n", suma_local);
}

int main(){
    int arr[] = {9, -10, 4, 3, -2, -8, 20, -2, 3, -1};
    int i = 0;
    int j = sizeof(arr) / sizeof(arr[0]);
    //printf("%d, %d", i, j);
    //dividir(arr, i, j-1);
    conquistar(arr, 0, 1);
    return 0;
}
