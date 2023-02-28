/*
Scrivi una funzione che prenda in input un array di interi e la sua lunghezza e restituisca l'indice dell'elemento che ha il valore massimo all'interno dell'array. Se ci sono più elementi con lo stesso valore massimo, la funzione dovrebbe restituire l'indice del primo di questi elementi.
*/

#include <iostream>
#include <string>
#include <array>
using namespace std;

int trovaIndiceMassimo(int arr[],int len){
    int indiceMassimo = 0;
    for(int i = 0; i < len; i++){
        if(arr[i] > arr[indiceMassimo]){
            indiceMassimo = i;
        }
    }
    return indiceMassimo;
}

int main(){
    int arr[7] = {1,1,12,8,3,9,12};
    int len = sizeof(arr)/sizeof(arr[0]);
    int indiceMassimo = trovaIndiceMassimo(arr, len);
    cout << "Indice Massimo: " << indiceMassimo << endl;
}